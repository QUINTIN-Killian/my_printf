/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains b flag functions
** b
*/

#include "my.h"
#include "my_printf.h"

void my_putbin(unsigned int nb, char *str, int x, int *count)
{
    int o = nb % 2;

    if (o < 10)
        str[x] = (o + 48);
    nb = nb / 2;
    *count = *count + 1;
    if (nb > 0) {
        my_putbin(nb, str, (x + 1), count);
    } else {
        my_putstr(my_revstr(str));
    }
}

int is_b(const char *restrict format, int *ind,
    va_list args, int *count)
{
    unsigned int nbr;
    char *str = malloc(sizeof(unsigned int));
    char c = format[*ind];

    if (c == 'b') {
        nbr = va_arg(args, unsigned int);
        my_putbin(nbr, str, 0, count);
    } else {
        return is_percent(format, ind, args, count);
    }
    return 0;
}
