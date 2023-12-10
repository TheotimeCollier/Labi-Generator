/*
** EPITECH PROJECT, 2023
** strucy
** File description:
** struct
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <ncurses.h>

#ifndef STRUCT
    #define STRUCT

typedef struct {
    int size_y;
    int size_x;
    char **map;
} pos;


#endif /* !stuct */
