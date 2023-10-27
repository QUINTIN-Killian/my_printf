/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains e flag functions
** e
*/

#include "my.h"
#include "my_printf.h"

int is_e(char c, va_list args, int *count, char *atribute_char)
{
    double nbr;

    if (c == 'e') {
        nbr = va_arg(args, double);
        if (nbr > 0.0 && is_elt_in_str(atribute_char, ' ')) {
            my_putchar(' ');
            *count = *count + 1;
        }
        my_sfic_e(nbr, count, 0);
    } else {
        return is_e_maj(c, args, count, atribute_char);
    }
    return 0;
}
