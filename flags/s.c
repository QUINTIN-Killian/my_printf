/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** Contains s flag functions
** s
*/

#include "my.h"
#include "my_printf.h"

int is_s(const char *restrict format, int *ind,
    va_list args, int *count)
{
    char *str;
    char c = format[*ind];

    if (c == 's') {
        str = va_arg(args, char *);
        *count = *count + my_strlen(str);
        my_putstr(str);
    } else {
        return is_u(format, ind, args, count);
    }
    return 0;
}
