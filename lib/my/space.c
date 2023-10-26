/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains space flag functions
** space
*/

#include "my.h"
#include "my_printf.h"

char is_space(const char *restrict format, int *ind)
{
    if (format[*ind] == ' ') {
        *ind = *ind + 1;
    } else {
        return is_plus(format, ind);
    }
    return ' ';
}
