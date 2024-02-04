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

int is_g(const char *restrict format, int *ind,
    va_list args, int *count)
{
    double nbr;
    char c = format[*ind];

    if (c == 'g' || c == 'G') {
        nbr = va_arg(args, double);
        atribute_char_on_g_g_maj(format, ind, count, nbr);
        my_g(nbr, count, 6);
    } else {
        return is_b(format, ind, args, count);
    }
    return 0;
}
