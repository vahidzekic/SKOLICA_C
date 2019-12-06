/// fajl: Grupa5/11_Dinamicka_Alokacija/predavanje_3/primer.c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int red = 2, kol = 3;

    // Alokacija niza pokazivaca na vrste
    int **matrica = (int**)malloc(red * sizeof(int*));
    if (matrica == NULL) return 1;

    // Alokacija kolona za svaki red
    for (int i = 0; i < red; i++) {
        matrica[i] = (int*)malloc(kol * sizeof(int));
        if (matrica[i] == NULL) {
            // Oslobodi vec alocirano
            for (int j = 0; j < i; j++) free(matrica[j]);
            free(matrica);
            return 1;
        }
    }

    // Popunjavanje
    for (int i = 0; i < red; i++) {
        for (int j = 0; j < kol; j++) {
            matrica[i][j] = i * kol + j + 1;
        }
    }

    // Ispis
    printf("Dinamicka matrica:\n");
    for (int i = 0; i < red; i++) {
        for (int j = 0; j < kol; j++) {
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    // Oslobadjanje (obrnuti redosled)
    for (int i = 0; i < red; i++) {
        free(matrica[i]);
    }
    free(matrica);

    return 0;
}
