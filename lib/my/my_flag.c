/*
** EPITECH PROJECT, 2023
** putchar flag
** File description:
** fgb
*/

#include "../../include/my.h"

void my_putchar_flags(va_list list)
{
    my_putchar(va_arg(list, char *));
}

void my_putstr_flags(va_list list)
{
    my_putstr(va_arg(list, char *));
}

void my_put_nbr_flags(va_list list)
{
    my_put_nbr(va_arg(list, int));
}

void my_putchar_p(va_list list)
{
    my_putchar('%');
}
