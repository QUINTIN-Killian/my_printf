/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains E flag functions
** e_maj
*/

#include "my.h"
#include "my_printf.h"

int is_e_maj(char c, va_list args, int *count, char *atribute_char)
{
    double nbr;

    if (c == 'E') {
        nbr = va_arg(args, double);
        if (nbr > 0.0 && is_elt_in_str(atribute_char, ' ')) {
            my_putchar(' ');
            *count = *count + 1;
        }
        my_sfic_e_maj(nbr, count, 0);
    } else {
        return is_p(c, args, count, atribute_char);
    }
    return 0;
}
