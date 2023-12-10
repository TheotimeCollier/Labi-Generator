/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** dfeg
*/

#include <stdarg.h>
#include <stdio.h>
#include "../../include/my.h"

static void flag_mod_ll(char letter, va_list list)
{
    for (int j = 0; j != 6; j++)
        if (letter == tab_flag_mod_ll[j].a)
            tab_flag_mod_ll[j].f(list);
}

static void flag_mod_l(char letter, va_list list)
{
    for (int j = 0; j != 8; j++)
        if (letter == tab_flag_mod_l[j].a)
            tab_flag_mod_l[j].f(list);
}

static void flag_mod_h(char letter, va_list list)
{
    for (int j = 0; j != 7; j++)
        if (letter == tab_flag_mod_h[j].a)
            tab_flag_mod_h[j].f(list);
}

static void flag_mod_hash(char letter, va_list list)
{
    for (int j = 0; j != 18; j++)
        if (letter == tab_flag_mod_hash[j].a)
            tab_flag_mod_hash[j].f(list);
}

static void flag(char letter, va_list list)
{
    for (int j = 0; j != 18; j++)
        if (letter == tab_flag[j].a)
            tab_flag[j].f(list);
}

int verif_flags(const char *format, va_list list, int i)
{
    if (format[i] == '#') {
        i++;
        flag_mod_hash(format[i], list);
    }
    return i;
}

int verif_flag(const char *format, va_list list, int i)
{
    if (format[i] == 'h' || format[i] == 'l' || format[i] == '#') {
        if (format[i] == 'h') {
            i++;
            flag_mod_h(format[i], list);
        }
        if (format[i] == 'l' && format[i + 1] == 'l') {
            i += 2;
            flag_mod_ll(format[i], list);
        }
        if (format[i] == 'l') {
            i++;
            flag_mod_l(format[i], list);
        }
        i = verif_flags(format, list, i);
    } else
        flag(format[i], list);
    return i;
}

void my_printf(const char *format, ...)
{
    va_list list;
    int i = 0;

    va_start(list, format);
    for (; format[i] != '\0';i++) {
        if (format[i] == '%') {
            i++;
            i = verif_flag(format, list, i);
        } else {
            my_putchar(format[i]);
        }
    }
}
