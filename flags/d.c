/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** Contains d flag functions
** d
*/

#include "my.h"
#include "my_printf.h"

int is_d(const char *restrict format, int *ind,
    va_list args, int *count)
{
    int nbr;
    char c = format[*ind];
    char length_modifier[3] = "nn\0";

    if (c == 'd') {
        get_length_modifier(format, ind, length_modifier);
        if (length_modifier[0] != 'n' && length_modifier[0] != 'L')
            length_modifier_on_d(format, ind, args, count);
        else {
            nbr = va_arg(args, int);
            atribute_char_on_d(format, ind, count, nbr);
            my_putnbr(nbr);
            *count = *count + my_intlen(nbr);
        }
    } else {
        return is_i(format, ind, args, count);
    }
    return 0;
}
