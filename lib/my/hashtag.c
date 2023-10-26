/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains hashtag flag functions
** hashtag
*/

#include "my.h"
#include "my_printf.h"

char is_hashtag(const char *restrict format, int *ind)
{
    if (format[*ind] == '#') {
        *ind = *ind + 1;
    } else {
        return is_zero(format, ind);
    }
    return '#';
}
