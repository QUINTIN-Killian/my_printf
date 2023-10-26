/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** Works the same as printf function
** my_printf
*/

/*
OBJECTIFS :
    - faire de la gestion d'erreur pour des '%' sans flag correct
*/

#include "my.h"
#include "my_printf.h"

static void no_correct_flag_found(const char *restrict format,
    int *ind, char *str, int *count)
{
    if (is_elt_in_str(str, '#')) {
        my_putchar('#');
        *count = *count + 1;
    }
    if (is_elt_in_str(str, ' ') && !is_elt_in_str(str, '+')) {
        my_putchar(' ');
        *count = *count + 1;
    }
    if (is_elt_in_str(str, '+')) {
        my_putchar('+');
        *count = *count + 1;
    }
    if (is_elt_in_str(str, '-')) {
        my_putchar('-');
        *count = *count + 1;
    }
    if (is_elt_in_str(str, '0') && !is_elt_in_str(str, '-')) {
        my_putchar('0');
        *count = *count + 1;
    }
}

static char *get_atribute_char_flags(const char *restrict format,
    int *ind, char *str)
{
    char atribute_char;
    int i = 0;

    atribute_char = is_hashtag(format, ind);
    while (atribute_char != 'n') {
        if (!is_elt_in_str(str, atribute_char)) {
            str[i] = atribute_char;
            i++;
        }
        atribute_char = is_hashtag(format, ind);
    }
    return str;
}

static int get_flag(const char *restrict format, int *ind,
    va_list args, int *count)
/*
writes '%' if it's not succeded by a correct flag and returns 0
or returns 1 if a correct flag is found
*/
{
    char str[6] = "nnnnn\0";

    if (*ind >= my_strlen(format))
        return -1;
    get_atribute_char_flags(format, ind, str);
    if (is_c(format[*ind], args, count, str) == -1) {
        my_putchar('%');
        *count = *count + 1;
        no_correct_flag_found(format, ind, str, count);
        if (*ind < my_strlen(format)) {
            my_putchar(format[*ind]);
        *count = *count + 1;
    }
        return 0;
    }
    return 1;
}

static int explore_format(const char *restrict format,
    va_list args, int *count)
{
    int ind = 0;
    int ans_flag = 0;

    while (ind < my_strlen(format)) {
        if (format[ind] == '%') {
            ind++;
            ans_flag = get_flag(format, &ind, args, count);
        } else {
            my_putchar(format[ind]);
            *count = *count + 1;
        }
        if (ans_flag == -1) {
            *count = -1;
            return -1;
        }
        ind++;
    }
    return 0;
}

int my_printf(const char *restrict format, ...)
{
    va_list args;
    int count = 0;

    if (!is_right_typo(format))
        return -1;
    va_start(args, format);
    explore_format(format, args, &count);
    va_end(args);
    return count;
}
