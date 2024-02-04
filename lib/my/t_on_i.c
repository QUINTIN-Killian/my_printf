/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Applies the j length modifier on the i flag
** j_on_i
*/

#include "my.h"
#include "my_printf.h"

static int atribute_char_on_i_before_length_modifier(ptrdiff_t nb,
    int *count, char *atribute_char)
{
    if (nb > 0 && is_elt_in_str(atribute_char, '+')) {
        my_putchar('+');
        *count = *count + 1;
    }
    if (nb > 0 && is_elt_in_str(atribute_char, ' ') &&
    !is_elt_in_str(atribute_char, '+')) {
        my_putchar(' ');
        *count = *count + 1;
    }
    return 0;
}

int my_put_t_on_i(ptrdiff_t nb, int *count)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
        *count = *count + 1;
    }
    if (nb < 10) {
        my_putchar(nb + 48);
        *count = *count + 1;
    } else {
        my_put_t_on_i(nb / 10, count);
        my_put_t_on_i(nb % 10, count);
    }
    return 0;
}

int t_on_i(ptrdiff_t nb, int *count, char *atribute_char)
{
    atribute_char_on_i_before_length_modifier(nb, count, atribute_char);
    return my_put_t_on_i(nb, count);
}
