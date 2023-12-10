/*
** EPITECH PROJECT, 2023
** flag_e
** File description:
** dfg
*/

#include "../../include/my.h"

void condition(int i, int MAJ, int *cnt)
{
    if (MAJ == 1)
        (*cnt) += my_putchar('E');
    else
        (*cnt) += my_putchar('e');
    (*cnt) += my_putchar('+');
    if (i < 10)
        (*cnt) += my_putchar('0');
    (*cnt) += my_put_nbr(i);
}

double neg(double nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb *= (-1);
    }
    return nb;
}

int flag_e(double nb, int MAJ)
{
    int nb2 = nb;
    int nb_i;
    int count = 0;
    int i;

    nb = neg(nb);
    for (i = 0; nb > 10; i++)
        nb /= 10;
    nb2 = nb;
    count += my_put_nbr(nb2);
    count += my_putchar('.');
    nb_i = nb;
    nb -= nb_i;
    for (int j = 0; j < 6; j++) {
        nb *= 10;
        nb_i = nb;
        count += my_put_nbr(nb_i);
        nb -= nb_i;
    }
    condition(i, MAJ, &count);
}

void my_put_e(va_list list)
{
    flag_e(va_arg(list, double), 0);
}

void my_put_em(va_list list)
{
    flag_e(va_arg(list, double), 1);
}
