/*
** EPITECH PROJECT, 2023
** flag u
** File description:
** def
*/

#include "../../include/my.h"

int my_putunsignedlonglong(int unsigned long long nb)
{
    int i = 0;

    my_put_unsignedlonglong(nb, &i);
    return i;
}

int my_put_unsignedlonglong(int unsigned long long nb, int *i)
{
    if (nb < 0){
        nb = -nb;
        my_putchar('-');
        (*i)++;
    }
    if (nb > 9){
        my_put_unsignedlonglong((nb / 10), i);
        my_putchar((nb % 10)+'0');
        (*i)++;
    } else{
        my_putchar(nb + '0');
        (*i)++;
    }
}

void my_put_llu(va_list list)
{
    my_putunsignedlonglong(va_arg(list, int unsigned long long));
}
