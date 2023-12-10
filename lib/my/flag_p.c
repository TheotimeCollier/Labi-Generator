/*
** EPITECH PROJECT, 2023
** flag p
** File description:
** zedfr
*/

#include "../../include/my.h"

int flag_p(unsigned long adresse)
{
    int count = 0;

    count += my_put_nbr(0);
    count += my_putchar('x');
    count += base(adresse, 16, 0);
    return count;
}

void my_put_p(va_list list)
{
    flag_p(va_arg(list, unsigned long));
}
