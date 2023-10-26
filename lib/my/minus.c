/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains - flag functions
** minus
*/

#include "my.h"
#include "my_printf.h"

char is_minus(const char *restrict format, int *ind)
{
    if (format[*ind] == '-') {
        *ind = *ind + 1;
    } else {
        return is_space(format, ind);
    }
    return '-';
}
