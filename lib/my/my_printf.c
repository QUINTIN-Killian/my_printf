/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** Works the same as printf function
** my_printf
*/

#include "my.h"
#include "my_printf.h"

int get_flag(const char *restrict format, int *ind,
    va_list args, int *count)
{
    char str[6] = "nnnnn\0";

    if (*ind >= my_strlen(format))
        return -1;
    while (*ind < my_strlen(format) &&
    (is_atribute_char(format[*ind]) || is_precision(format[*ind]) ||
    is_length_modifier(format[*ind])))
        *ind = *ind + 1;
    if (is_c(format, ind, args, count) == -1) {
        no_flag(format, ind, count);
        return 0;
    }
    return 1;
}

int explore_format(const char *restrict format, va_list args, int *count)
{
    int ans_flag = 0;

    for (int ind = 0; ind < my_strlen(format); ind++) {
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
    }
    return 0;
}

int my_printf(const char *restrict format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);
    explore_format(format, args, &count);
    va_end(args);
    return count;
}
