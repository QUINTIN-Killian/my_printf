/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Prints a number in scientific writing
** my_sfic_e
*/

#include "my.h"

void my_e_aux_fin(int x, int *count, int rep, int l)
{
    int comp = taille_l(l);

    if ((rep != 0)) {
        while (rep < comp) {
                rep *= 10;
            }
        my_putnbr(rep + 1);
        *count += my_intlen(rep);
    }
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

int my_e_aux(double nbr, int *count)
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

void my_sfic_e(double nbr, int *count, int l)
{
    char *str = malloc(sizeof(int));
    int r = 0;
    int comp = taille_l(l);
    int x = my_e_aux(nbr, count);
    int rep;

    while (nbr > 10.0) {
        nbr = nbr / 10.0;
    }
    rep = (int)((nbr - (double)((int)nbr)) * ((double)comp * 10));
    if (rep == 0) {
        rep = 1;
        while (rep <= comp) {
            rep *= 10;
            str[r] = ('0');
            r++;
        }
        *count += my_putstr(str);
    }
    my_e_aux_fin(x, count, rep, l);
}
