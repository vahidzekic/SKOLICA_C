/// fajl: Grupa2/05_Nizovi_i_Matrice/predavanje_1/primer.c
#include <stdio.h>

int main(void) {
    int ocene[5] = {9, 8, 10, 7, 9};
    int suma = 0;
    double prosek;

    for (int i = 0; i < 5; i++) {
        suma += ocene[i];
    }

    prosek = (double)suma / 5;
    printf("Prosecna ocena iznosi: %.2f\n", prosek);
    return 0;
}
