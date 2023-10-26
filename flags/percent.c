/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** Contains percent flag functions
** %
*/

#include "my.h"
#include "my_printf.h"

int is_percent(char c, va_list args, int *count, char *atribute_char)
{
    if (c == '%') {
        my_putchar('%');
        *count = *count + 1;
    } else {
        return -1;
    }
    return 0;
}
