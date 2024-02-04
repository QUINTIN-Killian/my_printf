/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** Contains u flag functions
** u
*/

#include "my.h"
#include "my_printf.h"

int is_u(const char *restrict format, int *ind,
    va_list args, int *count)
{
    unsigned int nbr;
    char c = format[*ind];
    char length_modifier[3] = "nn\0";

    if (c == 'u') {
        get_length_modifier(format, ind, length_modifier);
        if (length_modifier[0] != 'n' && length_modifier[0] != 'L')
            length_modifier_on_u(format, ind, args, count);
        else {
            nbr = va_arg(args, unsigned int);
            my_putnbr(nbr);
            *count = *count + my_intlen(nbr);
        }
    } else {
        return is_x(format, ind, args, count);
    }
    return 0;
}
