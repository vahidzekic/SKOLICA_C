/// fajl: Grupa2/05_Nizovi_i_Matrice/predavanje_3/primer.c
#include <stdio.h>

int main(void) {
    int a[5] = {64, 34, 25, 12, 22};
    int n = 5;
    int temp;

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sortiran niz: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
