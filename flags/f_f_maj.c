/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains f and F flag functions
** f_f_maj
*/

#include "my.h"
#include "my_printf.h"

int is_f(const char *restrict format, int *ind,
    va_list args, int *count)
{
    double nbr;
    char c = format[*ind];

    if (c == 'f' || c == 'F') {
        nbr = va_arg(args, double);
        atribute_char_on_f_f_maj(format, ind, count, nbr);
        my_putdou(nbr, count, 6);
    } else {
        return is_g(format, ind, args, count);
    }
    return 0;
}
