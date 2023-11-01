/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains ll length modifier functions
** ll
*/

#include "my.h"
#include "my_printf.h"

int is_ll(const char *restrict format, int *ind, char *str)
{
    int my_ind = *ind;

    my_ind--;
    if (my_ind > 1 && format[my_ind] == 'l' && format[my_ind - 1] == 'l') {
        str[0] = 'l';
        return 2;
    } else
        return is_q(format, ind, str);
    return 0;
}
