/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains L length modifier functions
** l_maj
*/

#include "my.h"
#include "my_printf.h"

int is_l_maj(const char *restrict format, int *ind, char *str)
{
    int my_ind = *ind;

    my_ind--;
    if (my_ind > 0 && format[my_ind] == 'L') {
        str[0] = 'L';
        return 1;
    } else
        return is_j(format, ind, str);
    return 0;
}
