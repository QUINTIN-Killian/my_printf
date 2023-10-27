/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Prints a hexadecimal number
** my_puthex
*/

#include "my.h"

void my_puthex_aux(unsigned int x, int y, char *str)
{
    int o = x % 16;

    if (o == 10)
        str[y] = 'a';
    if (o == 11)
        str[y] = 'b';
    if (o == 12)
        str[y] = 'c';
    if (o == 13)
        str[y] = 'd';
    if (o == 14)
        str[y] = 'e';
    if (o == 15)
        str[y] = 'f';
    if (o < 10)
        str[y] = (o + 48);
}

void my_puthex(unsigned int x, int y, char *str, int *count)
{
    my_puthex_aux(x, y, str);
    x = x / 16;
    *count = *count + 1;
    if (x > 0) {
        my_puthex(x, (y + 1), str, count);
    } else {
        my_putstr(my_revstr(str));
    }
}
