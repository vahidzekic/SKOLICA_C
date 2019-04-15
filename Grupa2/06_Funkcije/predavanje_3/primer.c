/// fajl: Grupa2/06_Funkcije/predavanje_3/primer.c
#include <stdio.h>

int faktorijel(int n) {
    // Bazni slucaj
    if (n <= 1) {
        return 1;
    }
    // Rekurzivni korak
    return n * faktorijel(n - 1);
}

int main(void) {
    int broj = 5;
    printf("Faktorijel broja %d je %d\n", broj, faktorijel(broj));
    return 0;
}
