/*
** EPITECH PROJECT, 2023
** getnbr
** File description:
** getnbr
*/

#include <stdlib.h>
#include <stdio.h>

int my_getnbr(char const *str)
{
    char num[6789];
    int j = 0;
    int i = 0;
    int nb = 0;

    while (str[i] != '%' && str[i + 1] != '+')
        i++;
    i += 2;
    for (i; str[i] > 47 && str[i] < 58; i++) {
            num[j] = str[i] - 48;
            j++;
    }
    for (int y = 0; y < j; y++) {
        nb += num[y];
        nb *= 10;
    }
    nb /= 10;
    return nb;
}
