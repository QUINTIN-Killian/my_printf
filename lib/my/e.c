/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains e flag functions
** e
*/

#include "my.h"
#include "my_printf.h"

int is_e(const char *restrict format, int *ind,
    va_list args, int *count)
{
    double nbr;
    char c = format[*ind];

    if (c == 'e') {
        nbr = va_arg(args, double);
        atribute_char_on_e(format, ind, count, nbr);
        my_sfic_e(nbr, count, 6);
    } else {
        return is_e_maj(format, ind, args, count);
    }
    return 0;
}
