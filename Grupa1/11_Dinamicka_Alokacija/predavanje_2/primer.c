/// fajl: Grupa1/11_Dinamicka_Alokacija/predavanje_2/primer.c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *niz = (int*)calloc(3, sizeof(int));
    if (niz == NULL) return 1;

    printf("Calloc inicijalizacija na nulu: %d %d %d\n", niz[0], niz[1], niz[2]);

    niz[0] = 5; niz[1] = 10; niz[2] = 15;

    // Povecavamo velicinu niza na 5 elemenata
    int *novi_niz = (int*)realloc(niz, 5 * sizeof(int));
    if (novi_niz == NULL) {
        free(niz);
        return 1;
    }
    niz = novi_niz;

    niz[3] = 20;
    niz[4] = 25;

    printf("Prosireni niz: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", niz[i]);
    }
    printf("\n");

    free(niz);
    return 0;
}
