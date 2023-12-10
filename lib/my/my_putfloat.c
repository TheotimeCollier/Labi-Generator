/*
** EPITECH PROJECT, 2023
** my_putfloat
** File description:
** rzfg
*/

#include <stdio.h>
#include "../../include/my.h"

int my_putfloat(double a)
{
    int nb_d = (double)a;
    float nb_f = (a - nb_d);
    int nb_i;
    int cnt = 0;

    cnt = my_put_nbr(nb_d);
    cnt = my_putchar('.');
    for (int i = 0; i < 6; i++) {
        nb_f *= 10;
        nb_i = nb_f;
        cnt = my_put_nbr(nb_i);
        nb_f -= nb_i;
    }
    return cnt;
}

void my_put_f(va_list list)
{
    my_putfloat(va_arg(list, double));
}
