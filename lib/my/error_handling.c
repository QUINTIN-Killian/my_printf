/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** Contains functions which verify errors
** error_handling
*/

#include "my.h"
#include "my_printf.h"

void found_atribute_char(const char *restrict format, int *ind,
    int *my_ind, int *count)
{
    char atribute_char[6] = "nnnnn\0";

    get_atribute_char_flags(format, ind, atribute_char);
    *my_ind = *my_ind - *count;
    atribute_char_no_correct_flag_found(format, my_ind,
    atribute_char, count);
    *my_ind = *my_ind + *count;
    while (is_atribute_char(format[*my_ind]))
        *my_ind = *my_ind + 1;
}

void found_length_modifier(const char *restrict format,
    int *ind, int *my_ind, int *count)
{
    char length_modifier[3] = "nn\0";

    get_length_modifier(format, ind, length_modifier);
    *my_ind = *my_ind + (length_modifier[1] - 48);
    while (is_length_modifier(format[*my_ind])) {
        my_putchar(format[*my_ind]);
        *count = *count + 1;
        *my_ind = *my_ind + 1;
    }
}

void no_flag(const char *restrict format, int *ind, int *count)
{
    int my_ind = *ind;

    while (format[my_ind] != '%')
        my_ind--;
    while (my_ind <= *ind) {
        if (is_atribute_char(format[my_ind]))
            found_atribute_char(format, ind, &my_ind, count);
        if (is_length_modifier(format[my_ind]))
            found_length_modifier(format, ind, &my_ind, count);
        if (my_ind <= *ind) {
            my_putchar(format[my_ind]);
            *count = *count + 1;
        }
        my_ind++;
    }
}
