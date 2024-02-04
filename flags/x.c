/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** Contains x flag functions
** x
*/

#include "my.h"
#include "my_printf.h"

int is_x(const char *restrict format, int *ind,
    va_list args, int *count)
{
    unsigned int nbr;
    char *str;
    char c = format[*ind];
    char length_modifier[3] = "nn\0";

    if (c == 'x') {
        get_length_modifier(format, ind, length_modifier);
        if (length_modifier[0] != 'n' && length_modifier[0] != 'L')
            length_modifier_on_x(format, ind, args, count);
        else {
            str = malloc(sizeof(unsigned int));
            nbr = va_arg(args, unsigned int);
            atribute_char_on_x(format, ind, count, nbr);
            my_puthex(nbr, 0, str, count);
        }
    } else {
        return is_x_maj(format, ind, args, count);
    }
    return 0;
}
