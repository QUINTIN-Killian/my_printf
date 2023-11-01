/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains hashtag flag functions
** hashtag
*/

#include "my.h"
#include "my_printf.h"

char is_hashtag(const char *restrict format, int my_ind)
{
    if (format[my_ind] == '#') {
        return '#';
    } else {
        return is_zero(format, my_ind);
    }
    return 'x';
}
