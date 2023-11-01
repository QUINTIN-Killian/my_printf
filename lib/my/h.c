/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains h length modifier functions
** h
*/

#include "my.h"
#include "my_printf.h"

int is_h(const char *restrict format, int *ind, char *str)
{
    int my_ind = *ind;

    my_ind--;
    if (my_ind > 0 && format[my_ind] == 'h' &&
    format[my_ind - 1] != 'h') {
        str[0] = 'h';
        return 1;
    } else
        return is_l(format, ind, str);
    return 0;
}
