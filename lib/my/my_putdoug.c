/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** my_putdoug
*/

#include "my.h"

void my_putdoug_aux(int comp, int *count, int rep)
{
    char *str = malloc(sizeof(int));
    int r = 0;

    if (rep == 0) {
        my_putchar('0');
    } else {
        my_putnbr(rep);
        *count += my_intlen(rep);
    }
}

void my_putdoug(double nbr, int *count, int l)
{
    int y;
    int rep;
    int comp = taille_l(l);

    y = (int)nbr;
    my_putnbr(y);
    *count += my_intlen(y);
    my_putchar('.');
    *count = *count + 1;
    rep = (int)((nbr - (double)y) * ((double)comp * 10));
    my_putdoug_aux(comp, count, rep);
}
