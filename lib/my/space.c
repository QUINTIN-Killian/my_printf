/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains space flag functions
** space
*/

#include "my.h"
#include "my_printf.h"

char is_space(const char *restrict format, int my_ind)
{
    if (format[my_ind] == ' ') {
        return ' ';
    } else {
        return is_plus(format, my_ind);
    }
    return 'x';
}
