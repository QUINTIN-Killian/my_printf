/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** Contains u flag functions
** u
*/

#include "my.h"
#include "my_printf.h"

int is_u(char c, va_list args, int *count, char *atribute_char)
{
    unsigned int nbr;

    if (c == 'u') {
        nbr = va_arg(args, unsigned int);
        my_putnbr(nbr);
        *count = *count + my_intlen(nbr);
    } else {
        return is_x(c, args, count, atribute_char);
    }
    return 0;
}
