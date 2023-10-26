/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains + flag functions
** plus
*/

#include "my.h"
#include "my_printf.h"

char is_plus(const char *restrict format, int *ind)
{
    if (format[*ind] == '+') {
        *ind = *ind + 1;
    } else {
        return 'n';
    }
    return '+';
}
