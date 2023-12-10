/*
** EPITECH PROJECT, 2023
** zert
** File description:
** ertyu
*/

#include "../../include/my.h"

void basello2(int *cmpt, char *res, int i)
{
    for (int j = i - 1; j >= 0; j--) {
        if (res[j] >= 0 && res[j] <= 9)
            *cmpt += my_putlonglong2(res[j]);
        else
            *cmpt += my_putchar(res[j]);
    }
}

int basello(unsigned long long nb, int puissance, int MAJ)
{
    char res[124];
    int i;
    int cmpt = 0;
    char hexa[] = {'a', 'b', 'c', 'd', 'e', 'f'};

    if (nb == 0)
        my_putlonglong2(0);
    for (i = 0; nb > 0; i++) {
        res[i] = (nb % puissance);
        if (res[i] > 9)
            res[i] = hexa[res[i] -10];
        nb = (nb / puissance);
    }
    if (MAJ == 1)
        my_strupcase(res);
    basello2(&cmpt, &res, i);
    return cmpt;
}

void my_put_llo(va_list list)
{
    basello(va_arg(list, int unsigned long long), 8, 0);
}
