/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains a flag functions
** a
*/

#include "my.h"
#include "my_printf.h"

void my_a(double nbr, int *count, int l)
{
    int x = 0;
    int y;
    int rep;
    char *str = malloc(sizeof(int));
    int r = 0;
    int comp = taille_l(l);

    while (nbr > 10.0) {
        nbr = nbr / 10.0;
        x++;
    }
    y = (int)nbr;
    my_puthex(y, 0, str, count);
    my_putchar('.');
    *count += 2;
    rep = (int)((nbr - (double)y) * ((double)comp * 10));
    if (rep == 0) {
        rep = 1;
        while (rep <= comp) {
            rep *= 10;
            str[r] = ('0');
            r++;
        }
        *count += my_putstr(str);
    } else {
        while (rep < comp) {
            rep *= 10;
        }
        my_puthex(rep, 0, str, count);
    }
    my_putchar('p');
    my_putchar('+');
    if (x >= 10) {
        my_puthex(x, 0, str, count);
    } else {
        my_putchar('0');
        my_puthex(x, 0, str, count);
    }
}

int is_a(char c, va_list args, int *count, char *atribute_char)
{
    double nbr;

    if (c == 'a') {
        nbr = va_arg(args, double);
        my_a(nbr, count, 0);
    } else {
        return is_percent(c, args, count, atribute_char);
    }
    return 0;
}
