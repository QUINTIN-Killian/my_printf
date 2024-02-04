/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains - flag functions
** minus
*/

#include "my.h"
#include "my_printf.h"

char is_minus(const char *restrict format, int my_ind)
{
    if (format[my_ind] == '-') {
        return '-';
    } else {
        return is_space(format, my_ind);
    }
    return 'x';
}
