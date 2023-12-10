/*
** EPITECH PROJECT, 2023
** flag_h
** File description:
** dfg
*/

#include "../../include/my.h"

void my_put_hasho(va_list list)
{
    my_put_nbr(0);
    base(va_arg(list, unsigned int), 8, 1);
}

void my_put_hashx(va_list list)
{
    my_putstr("0x");
    base(va_arg(list, unsigned int), 16, 1);
}

void my_put_hashxm(va_list list)
{
    my_putstr("0X");
    base(va_arg(list, unsigned int), 16, 1);
}
