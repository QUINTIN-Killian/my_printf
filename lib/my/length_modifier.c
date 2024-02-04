/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains functions able to determine
** the length modifier
** length_modifier
*/

#include "my.h"
#include "my_printf.h"

int get_length_modifier(const char *restrict format,
    int *ind, char *str)
{
    str[1] = is_hh(format, ind, str) + 48;
    return 0;
}
