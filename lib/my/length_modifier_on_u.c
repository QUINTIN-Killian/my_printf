/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains functions to apply a length
** modifier on the u flag
** length_modifier_on_u
*/

#include "my.h"
#include "my_printf.h"

int other_length_modifier_aux_u(char *length_modifier,
    va_list args, int *count)
{
    if (length_modifier[0] == 'z') {
        z_on_u(va_arg(args, size_t), count);
        return 0;
    }
    if (length_modifier[0] == 'Z') {
        z_on_u(va_arg(args, size_t), count);
        return 0;
    }
    if (length_modifier[0] == 't') {
        t_on_u(va_arg(args, ptrdiff_t), count);
        return 0;
    }
    return -1;
}

int other_length_modifier_u(char *length_modifier, va_list args, int *count)
{
    if (length_modifier[0] == 'q') {
        ll_on_u(va_arg(args, unsigned long long), count);
        return 0;
    }
    if (length_modifier[0] == 'j') {
        j_on_u(va_arg(args, uintmax_t), count);
        return 0;
    }
    return other_length_modifier_aux_u(length_modifier, args, count);
}

int l_length_modifier_u(char *length_modifier, va_list args, int *count)
{
    if (length_modifier[0] == 'l') {
        if (length_modifier[1] == '1') {
            l_on_u(va_arg(args, unsigned long), count);
            return 0;
        }
        if (length_modifier[1] == '2') {
            ll_on_u(va_arg(args, unsigned long long), count);
            return 0;
        }
    }
    return other_length_modifier_u(length_modifier, args, count);
}

int h_length_modifier_u(char *length_modifier, va_list args, int *count)
{
    if (length_modifier[0] == 'h') {
        if (length_modifier[1] == '2') {
            hh_on_u(va_arg(args, unsigned int), count);
            return 0;
        }
        if (length_modifier[1] == '1') {
            h_on_u(va_arg(args, unsigned int), count);
            return 0;
        }
    }
    return l_length_modifier_u(length_modifier, args, count);
}

int length_modifier_on_u(const char *restrict format, int *ind,
    va_list args, int *count)
{
    char length_modifier[3] = "nn\0";
    int ans;

    get_length_modifier(format, ind, length_modifier);
    ans = h_length_modifier_u(length_modifier, args, count);
    if (ans == -1)
        return -1;
    return 0;
}
