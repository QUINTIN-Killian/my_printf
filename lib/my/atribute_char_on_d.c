/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Applies the corresponding atribute
** char action on the d flag
** atribute_char_on_d
*/

#include "my.h"
#include "my_printf.h"

int atribute_char_on_d(const char *restrict format, int *ind,
    int *count, int nbr)
{
    char str[6] = "nnnnn\0";

    if (nbr > 0 && is_elt_in_str
    (get_atribute_char_flags(format, ind, str), '+')) {
        my_putchar('+');
        *count = *count + 1;
    }
    if (nbr > 0 && is_elt_in_str
    (get_atribute_char_flags(format, ind, str), ' ') &&
    !is_elt_in_str(get_atribute_char_flags(format, ind, str), '+')) {
        my_putchar(' ');
        *count = *count + 1;
    }
    return 0;
}
