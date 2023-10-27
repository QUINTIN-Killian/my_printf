/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Prints a hexadecimal number
** my_puthex_maj
*/

#include "my.h"

void my_puthex_maj_aux(unsigned int x, int y, char *str)
{
    int o = x % 16;

    if (o == 10)
        str[y] = 'A';
    if (o == 11)
        str[y] = 'B';
    if (o == 12)
        str[y] = 'C';
    if (o == 13)
        str[y] = 'D';
    if (o == 14)
        str[y] = 'E';
    if (o == 15)
        str[y] = 'F';
    if (o < 10)
        str[y] = (o + 48);
}

void my_puthex_maj(unsigned int x, int y, char *str, int *count)
{
    my_puthex_maj_aux(x, y, str);
    x = x / 16;
    *count = *count + 1;
    if (x > 0) {
        my_puthex_maj(x, (y + 1), str, count);
    } else {
        my_putstr(my_revstr(str));
    }
}
