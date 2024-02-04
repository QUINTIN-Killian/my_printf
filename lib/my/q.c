/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains q length modifier functions
** q
*/

#include "my.h"
#include "my_printf.h"

int is_q(const char *restrict format, int *ind, char *str)
{
    int my_ind = *ind;

    my_ind--;
    if (my_ind > 0 && format[my_ind] == 'q') {
        str[0] = 'q';
        return 1;
    } else
        return is_l_maj(format, ind, str);
    return 0;
}
