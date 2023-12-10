/*
** EPITECH PROJECT, 2023
** flag u
** File description:
** def
*/

#include "../../include/my.h"

int my_put_nbr3(int unsigned nb, int *i)
{
    if (nb < 0){
        nb = -nb;
        my_putchar('-');
        (*i)++;
    }
    if (nb > 9){
        my_put_nbr3((nb / 10), i);
        my_putchar((nb % 10)+'0');
        (*i)++;
    } else{
        my_putchar(nb + '0');
        (*i)++;
    }
}

int my_putunsigned(int unsigned nb)
{
    int i = 0;

    my_put_nbr3(nb, &i);
    return i;
}

void my_put_u(va_list list)
{
    my_putunsigned(va_arg(list, int unsigned));
}
