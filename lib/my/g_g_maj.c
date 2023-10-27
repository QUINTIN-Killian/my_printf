/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains g and G flag functions
** g_g_maj
*/

#include "my.h"
#include "my_printf.h"

void my_g(double nbr, int *count, int l)
{
    int x = 0;

    if (l == 0)
        l = 1;
    while (nbr > 10.0) {
        nbr = nbr / 10.0;
        x++;
    }
    if (x < -4 || x >= l) {
        my_sfic_e(nbr, count, l);
    } else {
        my_putdou(nbr, count, l);
    }
}

int is_g(char c, va_list args, int *count, char *atribute_char)
{
    double nbr;

    if (c == 'g' || c == 'G') {
        nbr = va_arg(args, double);
        if (nbr > 0.0 && is_elt_in_str(atribute_char, ' ')) {
            my_putchar(' ');
            *count = *count + 1;
        }
        my_g(nbr, count, 0);
    } else {
        return is_a(c, args, count, atribute_char);
    }
    return 0;
}
