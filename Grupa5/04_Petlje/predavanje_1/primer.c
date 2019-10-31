/// fajl: Grupa5/04_Petlje/predavanje_1/primer.c
#include <stdio.h>

int main(void) {
    int i = 1;
    int suma = 0;

    // Sabiranje brojeva od 1 do 10
    while (i <= 10) {
        suma += i;
        i++;
    }

    printf("Suma brojeva od 1 do 10 je: %d\n", suma);
    return 0;
}
