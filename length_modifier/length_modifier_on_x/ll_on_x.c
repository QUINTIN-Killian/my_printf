/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Applies the ll length modifier on the x flag
** ll_on_x
*/

#include "my.h"
#include "my_printf.h"

static int atribute_char_on_x_before_length_modifier(unsigned long long nb,
    int *count, char *atribute_char)
{
    if (nb != 0 && is_elt_in_str(atribute_char, '#')) {
        my_putstr("0x");
        *count = *count + 2;
    }
    return 0;
}

void my_put_ll_on_x_aux(unsigned long long x, int y, char *str)
{
    int o = x % 16;

    if (o == 10)
        str[y] = 'a';
    if (o == 11)
        str[y] = 'b';
    if (o == 12)
        str[y] = 'c';
    if (o == 13)
        str[y] = 'd';
    if (o == 14)
        str[y] = 'e';
    if (o == 15)
        str[y] = 'f';
    if (o < 10)
        str[y] = (o + 48);
}

void my_put_ll_on_x(unsigned long long x, int y, char *str, int *count)
{
    my_put_ll_on_x_aux(x, y, str);
    x = x / 16;
    *count = *count + 1;
    if (x > 0) {
        my_put_ll_on_x(x, (y + 1), str, count);
    } else {
        my_putstr(my_revstr(str));
    }
}

int ll_on_x(unsigned long long nb, int *count, char *atribute_char)
{
    char *str = malloc(sizeof(unsigned long long));

    atribute_char_on_x_before_length_modifier(nb, count, atribute_char);
    my_put_ll_on_x(nb, 0, str, count);
    return 0;
}
