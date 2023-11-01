/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains o flag functions
** o
*/

#include "my.h"
#include "my_printf.h"

int my_putoc(unsigned int nb, char *str, int x, int *count)
{
    int o = nb % 8;

    if (o < 10)
        str[x] = (o + 48);
    nb = nb / 8;
    *count = *count + 1;
    if (nb > 0) {
        my_putoc(nb, str, (x + 1), count);
    } else {
        my_putstr(my_revstr(str));
    }
}

int is_o(const char *restrict format, int *ind,
    va_list args, int *count)
{
    unsigned int nbr;
    char *str;
    char c = format[*ind];
    char length_modifier[3] = "nn\0";

    if (c == 'o') {
        get_length_modifier(format, ind, length_modifier);
        if (length_modifier[0] != 'n' && length_modifier[0] != 'L')
            length_modifier_on_o(format, ind, args, count);
        else {
            str = malloc(sizeof(unsigned int));
            nbr = va_arg(args, unsigned int);
            atribute_char_on_o(format, ind, count, nbr);
            my_putoc(nbr, str, 0, count);
        }
    } else {
        return is_e(format, ind, args, count);
    }
    return 0;
}
