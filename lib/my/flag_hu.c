/*
** EPITECH PROJECT, 2023
** flag h
** File description:
** def
*/

#include "../../include/my.h"

int my_put_unsigned_short(int unsigned short nb)
{
    int i = 0;

    my_put_unsigned_short2(nb, &i);
    return i;
}

int my_put_unsigned_short2(int unsigned short nb, int *i)
{
    if (nb < 0){
        nb = -nb;
        my_putchar('-');
        (*i)++;
    }
    if (nb > 9){
        my_put_short((nb / 10), i);
        my_putchar((nb % 10)+'0');
        (*i)++;
    } else{
        my_putchar(nb + '0');
        (*i)++;
    }
}

void my_put_hu(va_list list)
{
    my_put_unsigned_short(va_arg(list, int));
}
