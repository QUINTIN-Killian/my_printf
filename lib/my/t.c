/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains t length modifier functions
** t
*/

#include "my.h"
#include "my_printf.h"

int is_t(const char *restrict format, int *ind, char *str)
{
    int my_ind = *ind;

    my_ind--;
    if (my_ind > 0 && format[my_ind] == 't') {
        str[0] = 't';
        return 1;
    }
    return 0;
}
