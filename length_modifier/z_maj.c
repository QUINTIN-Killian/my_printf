/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains Z length modifier functions
** z_maj
*/

#include "my.h"
#include "my_printf.h"

int is_z_maj(const char *restrict format, int *ind, char *str)
{
    int my_ind = *ind;

    my_ind--;
    if (my_ind > 0 && format[my_ind] == 'Z') {
        str[0] = 'Z';
        return 1;
    } else
        return is_t(format, ind, str);
    return 0;
}
