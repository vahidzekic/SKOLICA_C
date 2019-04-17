/// fajl: Grupa2/07_Pokazivaci_Pointers/predavanje_1/primer.c
#include <stdio.h>

int main(void) {
    int x = 42;
    int *p = &x; // p dobija adresu od x

    printf("Vrednost x: %d\n", x);
    printf("Adresa x (&x): %p\n", (void*)&x);
    printf("Vrednost p (adresa): %p\n", (void*)p);
    printf("Dereferencirano p (*p): %d\n", *p);

    *p = 100; // Menjamo vrednost x preko pokazivaca
    printf("Nova vrednost x: %d\n", x);

    return 0;
}
