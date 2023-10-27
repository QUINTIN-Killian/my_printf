/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains X flag functions
** x_maj
*/

#include "my.h"
#include "my_printf.h"

int is_x_maj(char c, va_list args, int *count, char *atribute_char)
{
    unsigned int nbr;
    char *str = malloc(sizeof(unsigned int));

    if (c == 'X') {
        nbr = va_arg(args, unsigned int);
        if (nbr != 0 && is_elt_in_str(atribute_char, '#')) {
            my_putstr("0x");
            *count = *count + 2;
        }
        my_puthex_maj(nbr, 0, str, count);
    } else {
        return is_o(c, args, count, atribute_char);
    }
    return 0;
}
