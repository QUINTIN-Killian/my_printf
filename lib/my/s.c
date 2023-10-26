/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** Contains s flag functions
** s
*/

#include "my.h"
#include "my_printf.h"

int is_s(char c, va_list args, int *count, char *atribute_char)
{
    char *str;

    if (c == 's') {
        str = va_arg(args, char *);
        *count = *count + my_strlen(str);
        my_putstr(str);
    } else {
        return is_u(c, args, count, atribute_char);
    }
    return 0;
}
