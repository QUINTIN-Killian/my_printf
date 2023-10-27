/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains f and F flag functions
** f_f_maj
*/

#include "my.h"
#include "my_printf.h"

int is_f(char c, va_list args, int *count, char *atribute_char)
{
    double nbr;

    if (c == 'f' || c == 'F') {
        nbr = va_arg(args, double);
        if (nbr > 0.0 && is_elt_in_str(atribute_char, '+')) {
            my_putchar('+');
            *count = *count + 1;
        }
        if (nbr > 0.0 && is_elt_in_str(atribute_char, ' ') &&
        !is_elt_in_str(atribute_char, '+')) {
            my_putchar(' ');
            *count = *count + 1;
        }
        my_putdou(nbr, count, 0);
    } else {
        return is_g(c, args, count, atribute_char);
    }
    return 0;
}
