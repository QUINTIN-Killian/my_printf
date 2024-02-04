/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Applies the ll length modifier on the o flag
** ll_on_o
*/

#include "my.h"
#include "my_printf.h"

static int atribute_char_on_o_before_length_modifier(unsigned long long nb,
    int *count, char *atribute_char)
{
    if (nb != 0 && is_elt_in_str(atribute_char, '#')) {
        my_putchar('0');
        *count = *count + 1;
    }
    return 0;
}

int my_put_ll_on_o(unsigned long long nb, char *str, int x, int *count)
{
    int o = nb % 8;

    if (o < 10)
        str[x] = (o + 48);
    nb = nb / 8;
    *count = *count + 1;
    if (nb > 0) {
        my_put_ll_on_o(nb, str, (x + 1), count);
    } else {
        my_putstr(my_revstr(str));
    }
    return 0;
}

int ll_on_o(unsigned long long nb, int *count, char *atribute_char)
{
    char *str = malloc(sizeof(unsigned long long));

    atribute_char_on_o_before_length_modifier(nb, count, atribute_char);
    return my_put_ll_on_o(nb, str, 0, count);
}
