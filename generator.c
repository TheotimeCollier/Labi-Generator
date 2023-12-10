#include "include/my.h"

char **generate_map(pos *tab) {
    char **array = malloc((tab->size_x) * sizeof(char *));

    for (int i = 0; i < tab->size_x; i++) {
        array[i] = malloc((tab->size_y) * sizeof(char));
        for (int j = 0; j < tab->size_y; j++) {
            array[i][j] = '#';
        }
    }

    return array;
}

void fill_map(pos *tab) {
    for (int i = 0; i < tab->size_x; i++) {
        for (int j = 0; j < tab->size_y; j++) {
            printf("%c ", tab->map[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    pos tab;
    tab.size_x = 10;
    tab.size_y = 10;
    tab.map = generate_map(&tab);
    fill_map(&tab);

    for (int i = 0; i < tab.size_x; i++) {
        free(tab.map[i]);
    }
    free(tab.map);

    return 0;
}