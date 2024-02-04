/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** Contains percent flag functions
** %
*/

#include "my.h"
#include "my_printf.h"

int is_percent(const char *restrict format, int *ind,
    va_list args, int *count)
{
    char c = format[*ind];

    if (c == '%') {
        my_putchar('%');
        *count = *count + 1;
    } else {
        return -1;
    }
    return 0;
}
