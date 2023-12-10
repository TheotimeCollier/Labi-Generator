/*
** EPITECH PROJECT, 2023
** flag_g
** File description:
** g
*/
#include <stdarg.h>
#include <stdio.h>
#include "../../include/my.h"

int flag_gs(double nb)
{
    int nb2 = nb;
    float nb_f = (nb - nb2);
    int nb_i;
    int test;
    int power;
    int i = 0;
    int j = 6;

    my_put_nbr(nb2);
    if (nb2 == 0)
        i = 1;
    for (; nb2 != 0; i++)
        nb2 /= 10;
    j -= i;
    power = my_compute_power_rec(10, j);
    test = nb_f * power;
    if (test != 0) {
        my_putchar('.');
        my_put_nbr(test);
    }
}

int flag_e2(double nb, int MAJ, int i)
{
    int nb2 = nb;
    int nb_i;
    int count = 0;

    count += my_put_nbr(nb2);
    count += my_putchar('.');
    nb_i = nb;
    nb -= nb_i;
    for (int j = 0; j < 5; j++) {
        nb *= 10;
        nb_i = nb;
        if (j == 4)
            nb_i += 1;
        count += my_put_nbr(nb_i);
        nb -= nb_i;
    }
    condition(i, MAJ, &count);
    return count;
}

int flag_g(double nb, int MAJ)
{
    int j;

    for (j = 0; nb > 10; j++)
        nb /= 10;
    if (j < 6)
        flag_gs(nb);
    else
        flag_e2(nb, MAJ, j);
    return 0;
}

void my_put_g(va_list list)
{
    flag_g(va_arg(list, double), 0);
}

void my_put_gm(va_list list)
{
    flag_g(va_arg(list, double), 1);
}
