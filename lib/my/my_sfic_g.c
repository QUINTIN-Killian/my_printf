/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** my_sfic_g
*/

#include "my.h"

void my_g_aux_put_fin(int x, int *count)
{
    my_putchar('e');
    my_putchar('+');
    if (x >= 10) {
        my_putnbr(x);
        *count += (my_intlen(x) + 2);
    } else {
        my_putchar('0');
        my_putnbr(x);
        *count += (my_intlen(x) + 3);
    }
}

void my_g_aux_fin(int comp, int *count, int rep, int l)
{
    if (rep >= comp) {
        my_putnbr(rep);
        *count += my_intlen(rep);
    } else {
        my_putnbr(rep + 1);
        *count += my_intlen(rep);
    }
}

int my_g_aux(double nbr, int *count)
{
    int x = 0;

    while (nbr > 10.0) {
        nbr = nbr / 10.0;
        x++;
    }
    my_putnbr((int)nbr);
    my_putchar('.');
    *count += 2;
    return x;
}

void my_sfic_g(double nbr, int *count, int l)
{
    char *str = malloc(sizeof(int));
    int r = 0;
    int comp = taille_l(l);
    int x = my_g_aux(nbr, count);
    int rep;

    while (nbr > 10.0)
        nbr = nbr / 10.0;
    rep = (int)((nbr - (double)((int)nbr)) * ((double)comp * 10));
    if (rep == 0) {
        my_putchar('0');
    } else {
        my_g_aux_fin(comp, count, rep, l);
    }
    my_g_aux_put_fin(x, count);
}
