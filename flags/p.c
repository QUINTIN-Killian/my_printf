/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains p flag functions
** p
*/

#include "my.h"
#include "my_printf.h"

static void my_puthex_aux(int x, int y, char *str)
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

static void my_puthex(int x, int y, char *str, int *count)
{
    my_puthex_aux(x, y, str);
    x = x / 16;
    *count = *count + 1;
    if (x > 0) {
        my_puthex(x, (y + 1), str, count);
    } else {
        my_putstr(my_revstr(str));
    }
}

int is_p(char c, va_list args, int *count, char *atribute_char)
{
    int memory_address;
    char *str = malloc(sizeof(int));

    if (c == 'p') {
        memory_address = va_arg(args, int);
        my_putstr("0x");
        *count = *count + 2;
        my_puthex(memory_address, 0, str, count);
    } else {
        return is_n(c, args, count, atribute_char);
    }
    return 0;
}
