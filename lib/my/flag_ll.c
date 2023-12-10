/*
** EPITECH PROJECT, 2023
** flag l
** File description:
** def
*/

#include "../../include/my.h"

int my_putlonglong2(int long long nb)
{
    int i = 0;

    my_put_longlong(nb, &i);
    return i;
}

int my_put_longlong(int long long nb, int *i)
{
    if (nb < 0){
        nb = -nb;
        my_putchar('-');
        (*i)++;
    }
    if (nb > 9){
        my_put_longlong((nb / 10), i);
        my_putchar((nb % 10)+'0');
        (*i)++;
    } else{
        my_putchar(nb + '0');
        (*i)++;
    }
}

void my_put_ll(va_list list)
{
    my_putlonglong2(va_arg(list, int long long));
}
