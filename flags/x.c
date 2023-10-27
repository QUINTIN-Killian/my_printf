/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** Contains x flag functions
** x
*/

#include "my.h"
#include "my_printf.h"

int is_x(char c, va_list args, int *count, char *atribute_char)
{
    unsigned int nbr;
    char *str = malloc(sizeof(unsigned int));

    if (c == 'x') {
        nbr = va_arg(args, unsigned int);
        if (nbr != 0 && is_elt_in_str(atribute_char, '#')) {
            my_putstr("0x");
            *count = *count + 2;
        }
        my_puthex(nbr, 0, str, count);
    } else {
        return is_x_maj(c, args, count, atribute_char);
    }
    return 0;
}
