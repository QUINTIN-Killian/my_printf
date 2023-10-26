/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains n flag functions
** n
*/

#include "my.h"
#include "my_printf.h"

int is_n(char c, va_list args, int *count, char *atribute_char)
{
    int *memory_address;

    if (c == 'n') {
        memory_address = va_arg(args, int *);
        *memory_address = *count;
    } else {
        return is_f(c, args, count, atribute_char);
    }
    return 0;
}
