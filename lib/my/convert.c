/*
** EPITECH PROJECT, 2023
** zert
** File description:
** ertyu
*/

#include "../../include/my.h"

static void base2(int *cmpt, char *res, int i)
{
    for (int j = i - 1; j >= 0; j--) {
        if (res[j] >= 0 && res[j] <= 9)
            *cmpt += my_put_nbr(res[j]);
        else
            *cmpt += my_putchar(res[j]);
    }
}

int base(unsigned long nb, int puissance, int MAJ)
{
    char res[124];
    int i;
    int cmpt = 0;
    char hexa[] = {'a', 'b', 'c', 'd', 'e', 'f'};

    if (nb == 0)
        my_put_nbr(0);
    for (i = 0; nb > 0; i++) {
        res[i] = (nb % puissance);
        if (res[i] > 9)
            res[i] = hexa[res[i] -10];
        nb = (nb / puissance);
    }
    if (MAJ == 1)
        my_strupcase(res);
    base2(&cmpt, &res, i);
    return cmpt;
}

void my_put_x(va_list list)
{
    base(va_arg(list, unsigned int), 16, 0);
}

void my_put_xm(va_list list)
{
    base(va_arg(list, unsigned int), 16, 1);
}

void my_put_o(va_list list)
{
    base(va_arg(list, unsigned int), 8, 1);
}

void my_put_b(va_list list)
{
    base(va_arg(list, unsigned int), 2, 1);
}
