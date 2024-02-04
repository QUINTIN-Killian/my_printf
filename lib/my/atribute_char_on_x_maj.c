/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Applies the corresponding atribute
** char action on the X flag
** atribute_char_on_x_maj
*/

#include "my.h"
#include "my_printf.h"

int atribute_char_on_x_maj(const char *restrict format, int *ind,
    int *count, unsigned int nbr)
{
    char str[6] = "nnnnn\0";

    if (nbr != 0 && is_elt_in_str
    (get_atribute_char_flags(format, ind, str), '#')) {
        my_putstr("0x");
        *count = *count + 2;
    }
    return 0;
}
