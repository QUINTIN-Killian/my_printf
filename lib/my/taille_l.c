/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** taille_l
*/

#include "my.h"
#include "my_printf.h"

int taille_l(int l)
{
    int v = 1;

    if (l == 0) {
        return 100000;
    }
    for (int u = 0; u <= l; u++) {
        v *= 10;
    }
    return v;
}
