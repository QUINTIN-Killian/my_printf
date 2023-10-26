/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains e and E flag functions
** e_e_maj
*/

#include "my.h"
#include "my_printf.h"

static void my_sfic_e(double nbr, int *count, char c)
{
    int x = 0;
    int y;
    int rep;

    while (nbr > 10) {
        nbr = nbr / 10;
        x++;
    }
    y = (int)nbr;
    my_put_nbr(y);
    my_putchar('.');
    rep = (int)((nbr - (double)y) * 100.0);
    my_put_nbr(rep);
    my_putchar(c);
    my_put_nbr(x);
}

int is_e(char c, va_list args, int *count, char *atribute_char)
{
    double nbr;

    if (c == 'e' || c == 'E') {
        nbr = va_arg(args, double);
        my_sfic_e(nbr, count, c);
    } else {
        return is_p(c, args, count, atribute_char);
    }
    return 0;
}
