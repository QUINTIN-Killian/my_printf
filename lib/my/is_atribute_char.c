/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Returns 1 if the element is an
** atribute char, 0 if not
** is_atribute_char
*/

#include "my.h"
#include "my_printf.h"

int is_atribute_char(char c)
{
    if (c == '#' || c == '0' || c == '+' || c == '-' || c == ' ')
        return 1;
    return 0;
}
