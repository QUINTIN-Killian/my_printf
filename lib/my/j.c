/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains j length modifier functions
** j
*/

#include "my.h"
#include "my_printf.h"

int is_j(const char *restrict format, int *ind, char *str)
{
    int my_ind = *ind;

    my_ind--;
    if (my_ind > 0 && format[my_ind] == 'j') {
        str[0] = 'j';
        return 1;
    } else
        return is_z(format, ind, str);
    return 0;
}
