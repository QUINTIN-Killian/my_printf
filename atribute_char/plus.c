/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains + flag functions
** plus
*/

#include "my.h"
#include "my_printf.h"

char is_plus(const char *restrict format, int my_ind)
{
    if (format[my_ind] == '+') {
        return '+';
    } else {
        return 'n';
    }
    return 'x';
}
