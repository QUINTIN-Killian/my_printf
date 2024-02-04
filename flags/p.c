/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains p flag functions
** p
*/

#include "my.h"
#include "my_printf.h"

void my_puthex_long_aux(unsigned long x, int y, char *str)
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

void my_puthex_long(unsigned long x, int y, char *str, int *count)
{
    my_puthex_long_aux(x, y, str);
    x = x / 16;
    *count = *count + 1;
    if (x > 0) {
        my_puthex_long(x, (y + 1), str, count);
    } else {
        my_putstr(my_revstr(str));
    }
}

int is_p(const char *restrict format, int *ind,
    va_list args, int *count)
{
    unsigned long memory_address;
    char *str = malloc(sizeof(unsigned long));
    char c = format[*ind];

    if (c == 'p') {
        memory_address = va_arg(args, unsigned long);
        my_putstr("0x");
        *count = *count + 2;
        my_puthex_long(memory_address, 0, str, count);
    } else {
        return is_n(format, ind, args, count);
    }
    return 0;
}
