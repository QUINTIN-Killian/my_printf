/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains functions to determinate all
** the atribute chars
** atribute_char
*/

#include "my.h"
#include "my_printf.h"

void atribute_char_no_correct_flag_found(const char *restrict format,
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

int add_elt_in_str(char *str, char atribute_char, int *i)
{
    if (!is_elt_in_str(str, atribute_char)) {
        str[*i] = atribute_char;
        *i = *i + 1;
    }
    return 1;
}

char *get_atribute_char_flags(const char *restrict format,
    int *ind, char *str)
{
    char atribute_char;
    int my_ind = *ind - 1;
    int i = 0;

    while (my_ind >= 0 && format[my_ind] != '%') {
        atribute_char = is_hashtag(format, my_ind);
        if (atribute_char != 'n') {
            add_elt_in_str(str, atribute_char, &i);
        }
        my_ind--;
    }
    return str;
}
