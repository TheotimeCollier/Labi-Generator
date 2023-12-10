/*
** EPITECH PROJECT, 2023
** flag u
** File description:
** def
*/

#include "../../include/my.h"

int my_putunsignedlong(int unsigned long nb)
{
    int i = 0;

    my_put_unsignedlong(nb, &i);
    return i;
}

int my_put_unsignedlong(int unsigned long nb, int *i)
{
    if (nb < 0){
        nb = -nb;
        my_putchar('-');
        (*i)++;
    }
    if (nb > 9){
        my_put_unsignedlong((nb / 10), i);
        my_putchar((nb % 10)+'0');
        (*i)++;
    } else{
        my_putchar(nb + '0');
        (*i)++;
    }
}

void my_put_lu(va_list list)
{
    my_putunsignedlong(va_arg(list, int unsigned long));
}
