/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** Contains c flag functions
** c
*/

#include "my.h"
#include "my_printf.h"

int is_c(const char *restrict format, int *ind,
    va_list args, int *count)
{
    char c = format[*ind];
    char length_modifier[3] = "nn\0";

    if (c == 'c') {
        get_length_modifier(format, ind, length_modifier);
        my_putchar(va_arg(args, int));
        *count = *count + 1;
    } else {
        return is_d(format, ind, args, count);
    }
    return 0;
}
