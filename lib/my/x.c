/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** Contains x flag functions
** x
*/

#include "my.h"
#include "my_printf.h"

static void my_puthex_aux(unsigned int x, int y, char *str)
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

int is_x(char c, va_list args, int *count, char *atribute_char)
{
    unsigned int nbr;
    char *str = malloc(sizeof(unsigned int));

    if (c == 'x') {
        nbr = va_arg(args, unsigned int);
        my_puthex(nbr, 0, str, count);
    } else {
        return is_x_maj(c, args, count, atribute_char);
    }
    return 0;
}
