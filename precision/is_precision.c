/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Returns 1 if the character is part of a
** precision syntax, 0 if not
** is_precision
*/

#include "my.h"
#include "my_printf.h"

int is_precision(char c)
{
    if (c == '.' || (c >= '0' && c <= '9'))
        return 1;
    return 0;
}
