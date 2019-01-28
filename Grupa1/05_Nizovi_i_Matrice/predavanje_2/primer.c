/// fajl: Grupa1/05_Nizovi_i_Matrice/predavanje_2/primer.c
#include <stdio.h>

#define RED 2
#define KOL 3

int main(void) {
    int matrica[RED][KOL] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int transponovana[KOL][RED];

    // Transponovanje matrice
    for (int i = 0; i < RED; i++) {
        for (int j = 0; j < KOL; j++) {
            transponovana[j][i] = matrica[i][j];
        }
    }

    printf("Transponovana matrica:\n");
    for (int i = 0; i < KOL; i++) {
        for (int j = 0; j < RED; j++) {
            printf("%d ", transponovana[i][j]);
        }
        printf("\n");
    }

    return 0;
}
