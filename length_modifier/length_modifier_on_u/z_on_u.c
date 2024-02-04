/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** Applies the z length modifier on the u flag
** z_on_u
*/

#include "my.h"
#include "my_printf.h"

int my_put_z_on_u(size_t nb, int *count)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
        *count = *count + 1;
    }
    if (nb < 10) {
        my_putchar(nb + 48);
        *count = *count + 1;
    } else {
        my_put_z_on_u(nb / 10, count);
        my_put_z_on_u(nb % 10, count);
    }
    return 0;
}

int z_on_u(size_t nb, int *count)
{
    return my_put_z_on_u(nb, count);
}
