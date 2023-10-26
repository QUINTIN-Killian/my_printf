/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** Contains d flag functions
** d
*/

#include "my.h"
#include "my_printf.h"

int is_d(char c, va_list args, int *count, char *atribute_char)
{
    int nbr;

    if (c == 'd') {
        nbr = va_arg(args, int);
        my_put_nbr(nbr);
        *count = *count + my_intlen(nbr);
    } else {
        return is_i(c, args, count, atribute_char);
    }
    return 0;
}
