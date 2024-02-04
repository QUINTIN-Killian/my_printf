/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Prints a double type number
** my_putdou
*/

#include "my.h"

void my_putdou_aux(int comp, int *count, int rep)
{
    char *str = malloc(sizeof(int));
    int r = 0;

    if (rep == 0) {
        rep = 1;
        while (rep <= comp) {
            rep *= 10;
            str[r] = ('0');
            r++;
        }
        my_putstr(str);
        *count += r;
    } else {
        while (rep < comp) {
            rep *= 10;
        }
        my_putnbr(rep);
        *count += my_intlen(rep);
    }
}

void my_putdou(double nbr, int *count, int l)
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
    my_putdou_aux(comp, count, rep);
}
