/// fajl: Grupa3/04_Petlje/predavanje_3/primer.c
#include <stdio.h>

int main(void) {
    int broj;
    int suma = 0;

    printf("Unosite cele brojeve (unos 0 prekida program):\n");
    do {
        printf("Unos: ");
        scanf("%d", &broj);

        if (broj < 0) {
            printf("Preskacemo negativne brojeve.\n");
            continue; // Preskače sabiranje
        }

        suma += broj;
    } while (broj != 0);

    printf("Suma pozitivnih unetih brojeva je: %d\n", suma);
    return 0;
}
