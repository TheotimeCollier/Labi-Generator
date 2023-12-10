/*
** EPITECH PROJECT, 2023
** zjdaidj
** File description:
** yanis
*/

#include "../../include/my.h"

int my_put_nbr(int nb)
{
    int i = 0;

    my_put_nbr2(nb, &i);
    return i;
}

int my_put_nbr2(int nb, int *i)
{
    if (nb < 0){
        nb = -nb;
        my_putchar('-');
        (*i)++;
    }
    if (nb > 9){
        my_put_nbr2((nb / 10), i);
        my_putchar((nb % 10)+'0');
        (*i)++;
    } else{
        my_putchar(nb + '0');
        (*i)++;
    }
}
