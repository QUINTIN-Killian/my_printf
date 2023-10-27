/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains o flag functions
** o
*/

#include "my.h"
#include "my_printf.h"

int my_putoc(unsigned int nb, char *str, int x, int *count)
{
    int o = nb % 8;

    if (o < 10)
        str[x] = (o + 48);
    nb = nb / 8;
    *count = *count + 1;
    if (nb > 0) {
        my_putoc(nb, str, (x + 1), count);
    } else {
        my_putstr(my_revstr(str));
    }
}

int is_o(char c, va_list args, int *count, char *atribute_char)
{
    unsigned int nbr;
    char *str = malloc(sizeof(unsigned int));

    if (c == 'o') {
        nbr = va_arg(args, unsigned int);
        if (nbr != 0 && is_elt_in_str(atribute_char, '#')) {
            my_putchar('0');
            *count = *count + 1;
        }
        my_putoc(nbr, str, 0, count);
    } else {
        return is_e(c, args, count, atribute_char);
    }
    return 0;
}
