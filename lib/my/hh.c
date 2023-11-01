/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains hh length modifier functions
** hh
*/

#include "my.h"
#include "my_printf.h"

int is_hh(const char *restrict format, int *ind, char *str)
{
    int my_ind = *ind;

    my_ind--;
    if (my_ind > 1 && format[my_ind] == 'h' && format[my_ind - 1] == 'h') {
        str[0] = 'h';
        return 2;
    } else
        return is_h(format, ind, str);
    return 0;
}
