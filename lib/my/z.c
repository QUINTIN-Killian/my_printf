/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains z length modifier functions
** z
*/

#include "my.h"
#include "my_printf.h"

int is_z(const char *restrict format, int *ind, char *str)
{
    int my_ind = *ind;

    my_ind--;
    if (my_ind > 0 && format[my_ind] == 'z') {
        str[0] = 'z';
        return 1;
    } else
        return is_z_maj(format, ind, str);
    return 0;
}
