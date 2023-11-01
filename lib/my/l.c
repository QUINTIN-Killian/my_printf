/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains l length modifier functions
** l
*/

#include "my.h"
#include "my_printf.h"

int is_l(const char *restrict format, int *ind, char *str)
{
    int my_ind = *ind;

    my_ind--;
    if (my_ind > 0 && format[my_ind] == 'l' && format[my_ind - 1] != 'l') {
        str[0] = 'l';
        return 1;
    } else
        return is_ll(format, ind, str);
    return 0;
}
