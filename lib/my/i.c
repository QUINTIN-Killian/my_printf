/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** Contains i flag functions
** i
*/

#include "my.h"
#include "my_printf.h"

int is_i(char c, va_list args, int *count, char *atribute_char)
{
    int nbr;

    if (c == 'i') {
        nbr = va_arg(args, int);
        if (nbr > 0 && is_elt_in_str(atribute_char, '+')) {
            my_putchar('+');
            *count = *count + 1;
        }
        if (nbr > 0 && is_elt_in_str(atribute_char, ' ') &&
        !is_elt_in_str(atribute_char, '+')) {
            my_putchar(' ');
            *count = *count + 1;
        }
        my_putnbr(nbr);
        *count = *count + my_intlen(nbr);
    } else {
        return is_s(c, args, count, atribute_char);
    }
    return 0;
}
