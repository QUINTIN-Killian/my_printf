/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains functions to apply a length
** modifier on the i flag
** length_modifier_on_i
*/

#include "my.h"
#include "my_printf.h"

int other_length_modifier_aux_i(char *atribute_char,
    char *length_modifier, va_list args, int *count)
{
    if (length_modifier[0] == 'z') {
        z_on_d(va_arg(args, size_t), count, atribute_char);
        return 0;
    }
    if (length_modifier[0] == 'Z') {
        z_on_d(va_arg(args, size_t), count, atribute_char);
        return 0;
    }
    if (length_modifier[0] == 't') {
        t_on_d(va_arg(args, ptrdiff_t), count, atribute_char);
        return 0;
    }
    return -1;
}

int other_length_modifier_i(char *atribute_char,
    char *length_modifier, va_list args, int *count)
{
    if (length_modifier[0] == 'q') {
        ll_on_d(va_arg(args, long long), count, atribute_char);
        return 0;
    }
    if (length_modifier[0] == 'j') {
        j_on_d(va_arg(args, intmax_t), count, atribute_char);
        return 0;
    }
    return other_length_modifier_aux_i(atribute_char,
    length_modifier, args, count);
}

int l_length_modifier_i(char *atribute_char,
    char *length_modifier, va_list args, int *count)
{
    if (length_modifier[0] == 'l') {
        if (length_modifier[1] == '1') {
            l_on_d(va_arg(args, long), count, atribute_char);
            return 0;
        }
        if (length_modifier[1] == '2') {
            ll_on_d(va_arg(args, long long), count, atribute_char);
            return 0;
        }
    }
    return other_length_modifier_i(atribute_char,
    length_modifier, args, count);
}

int h_length_modifier_i(char *atribute_char,
    char *length_modifier, va_list args, int *count)
{
    if (length_modifier[0] == 'h') {
        if (length_modifier[1] == '2') {
            hh_on_d(va_arg(args, int), count, atribute_char);
            return 0;
        }
        if (length_modifier[1] == '1') {
            h_on_d(va_arg(args, int), count, atribute_char);
            return 0;
        }
    }
    return l_length_modifier_i(atribute_char, length_modifier, args, count);
}

int length_modifier_on_i(const char *restrict format, int *ind,
    va_list args, int *count)
{
    char atribute_char[6] = "nnnnn\0";
    char length_modifier[3] = "nn\0";
    int ans;

    get_atribute_char_flags(format, ind, atribute_char);
    get_length_modifier(format, ind, length_modifier);
    ans = h_length_modifier_i(atribute_char, length_modifier, args, count);
    if (ans == -1)
        return -1;
    return 0;
}
