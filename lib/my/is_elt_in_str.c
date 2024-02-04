/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Returns 1 if an element is in a string
** is_elt_in_str
*/

#include "my.h"

int is_elt_in_str(char *str, char elt)
{
    for (int i = 0; i < my_strlen(str); i++)
        if (str[i] == elt)
            return 1;
    return 0;
}
