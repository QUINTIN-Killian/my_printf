/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Returns 1 if the element is a
** length modifier, 0 if not
** is_atribute_char
*/

#include "my.h"
#include "my_printf.h"

int is_length_modifier(char c)
{
    if (c == 'h' || c == 'l' || c == 'q' || c == 'L'
    || c == 'j' || c == 'z' || c == 'Z' || c == 't')
        return 1;
    return 0;
}
