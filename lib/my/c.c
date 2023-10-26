/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** Contains c flag functions
** c
*/

#include "my.h"
#include "my_printf.h"

int is_c(char c, va_list args, int *count, char *atribute_char)
{
    if (c == 'c') {
        my_putchar(va_arg(args, int));
        *count = *count + 1;
    } else {
        return is_d(c, args, count, atribute_char);
    }
    return 0;
}
