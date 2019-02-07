/// fajl: Grupa1/07_Pokazivaci_Pointers/predavanje_2/primer.c
#include <stdio.h>

int main(void) {
    int niz[3] = {10, 20, 30};
    int *ptr = niz; // Istovetno sa ptr = &niz[0]

    for (int i = 0; i < 3; i++) {
        printf("Element %d: %d (Adresa: %p)\n", i, *(ptr + i), (void*)(ptr + i));
    }

    return 0;
}
