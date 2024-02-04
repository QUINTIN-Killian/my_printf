/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains n flag functions
** n
*/

#include "my.h"
#include "my_printf.h"

int is_n(const char *restrict format, int *ind,
    va_list args, int *count)
{
    int *memory_address;
    char c = format[*ind];

    if (c == 'n') {
        memory_address = va_arg(args, int *);
        *memory_address = *count;
    } else {
        return is_f(format, ind, args, count);
    }
    return 0;
}
