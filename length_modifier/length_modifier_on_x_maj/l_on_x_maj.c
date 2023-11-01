/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Applies the l length modifier on the X flag
** l_on_x_maj
*/

#include "my.h"
#include "my_printf.h"

static int atribute_char_on_x_maj_before_length_modifier(unsigned long nb,
    int *count, char *atribute_char)
{
    if (nb != 0 && is_elt_in_str(atribute_char, '#')) {
        my_putstr("0x");
        *count = *count + 2;
    }
    return 0;
}

void my_put_l_on_x_maj_aux(unsigned long x, int y, char *str)
{
    int o = x % 16;

    if (o == 10)
        str[y] = 'A';
    if (o == 11)
        str[y] = 'B';
    if (o == 12)
        str[y] = 'C';
    if (o == 13)
        str[y] = 'D';
    if (o == 14)
        str[y] = 'E';
    if (o == 15)
        str[y] = 'F';
    if (o < 10)
        str[y] = (o + 48);
}

void my_put_l_on_x_maj(unsigned long x, int y, char *str, int *count)
{
    my_put_l_on_x_maj_aux(x, y, str);
    x = x / 16;
    *count = *count + 1;
    if (x > 0) {
        my_put_l_on_x_maj(x, (y + 1), str, count);
    } else {
        my_putstr(my_revstr(str));
    }
}

int l_on_x_maj(unsigned long nb, int *count, char *atribute_char)
{
    char *str = malloc(sizeof(unsigned long));

    atribute_char_on_x_maj_before_length_modifier(nb, count, atribute_char);
    my_put_l_on_x_maj(nb, 0, str, count);
}
