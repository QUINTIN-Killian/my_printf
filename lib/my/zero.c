/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains zero flag functions
** zero
*/

#include "my.h"
#include "my_printf.h"

char is_zero(const char *restrict format, int *ind)
{
    if (format[*ind] == '0') {
        *ind = *ind + 1;
    } else {
        return is_minus(format, ind);
    }
    return '0';
}
