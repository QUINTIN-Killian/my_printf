/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Contains functions to get the precision
** given and apply it on flags functions
** precision
*/

#include "my.h"
#include "my_printf.h"

int get_precision(const char *restrict format, int *ind)
{
    int ans = 0;
    int elt = 0;
    int my_ind = *ind;

    while (my_ind >= 0 && (format[my_ind] != '.' || format[my_ind] != '%')) {
        if (format[my_ind] >= '0' && format[my_ind] <= '9') {
            ans = ans + (format[my_ind] - 48) *
            (my_compute_power_rec(10, elt));
            elt++;
        }
        if (format[my_ind] == '-')
            ans = ans * -1;
        my_ind--;
    }
    if (my_ind >= 0 && (format[my_ind] != '%' || ans < 0))
        return 6;
    return ans;
}
