/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains X flag functions
** x_maj
*/

#include "my.h"
#include "my_printf.h"

static void my_puthex_aux(unsigned int x, int y, char *str)
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

static void my_puthex(unsigned int x, int y, char *str, int *count)
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

int is_x_maj(char c, va_list args, int *count, char *atribute_char)
{
    unsigned int nbr;
    char *str = malloc(sizeof(unsigned int));

    if (c == 'X') {
        nbr = va_arg(args, unsigned int);
        my_puthex(nbr, 0, str, count);
    } else {
        return is_o(c, args, count, atribute_char);
    }
    return 0;
}
