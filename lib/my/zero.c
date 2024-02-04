/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains zero flag functions
** zero
*/

#include "my.h"
#include "my_printf.h"

char is_zero(const char *restrict format, int my_ind)
{
    if (format[my_ind] == '0') {
        return '0';
    } else {
        return is_minus(format, my_ind);
    }
    return 'x';
}
