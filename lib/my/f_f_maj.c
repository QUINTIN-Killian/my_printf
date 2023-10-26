/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains f and F flag functions
** f_f_maj
*/

#include "my.h"
#include "my_printf.h"

static void my_putdou(double nbr, int *count)
{
    int i = (int)nbr;
    int percent;

    if (nbr == 0) {
        my_putstr("0.000000");
        return;
    }
    my_put_nbr(i);
    my_putchar('.');
    percent = (int)((nbr - (double)i) * 100.0);
    if (percent < 100000) {
        my_put_nbr(percent);
        for (i = 0; i < 6; i++) {
            my_putchar('0');
        }
    } else {
    my_put_nbr(percent);
    }
}

int is_f(char c, va_list args, int *count, char *atribute_char)
{
    double nbr;

    if (c == 'f' || c == 'F') {
        nbr = va_arg(args, double);
        my_putdou(nbr, count);
    } else {
        return is_percent(c, args, count, atribute_char);
    }
    return 0;
}
