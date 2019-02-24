/// fajl: Grupa1/11_Dinamicka_Alokacija/predavanje_1/primer.c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Alokacija niza od 5 celih brojeva
    int *niz = (int*)malloc(5 * sizeof(int));

    if (niz == NULL) {
        printf("Neuspesna alokacija memorije!\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        niz[i] = (i + 1) * 10;
    }

    printf("Elementi dinamickog niza: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", niz[i]);
    }
    printf("\n");

    // Oslobadjanje memorije
    free(niz);
    niz = NULL; // Dobra praksa

    return 0;
}
