/// fajl: Grupa5/12_Bitovne_Operacije/predavanje_3/primer.c
#include <stdio.h>

#define BIT_AKTIVAN 0x01 // 0000 0001
#define BIT_ZAUZET   0x02 // 0000 0010

int main(void) {
    unsigned char status = 0; // 0000 0000

    // Setovanje statusa da je aktivan
    status |= BIT_AKTIVAN;
    printf("Status nakon aktivacije: 0x%02X\n", status);

    // Provera da li je aktivan
    if (status & BIT_AKTIVAN) {
        printf("Sistem je aktivan.\n");
    }

    // Brisanje statusa aktivacije
    status &= ~BIT_AKTIVAN;
    printf("Status nakon gasenja: 0x%02X\n", status);

    return 0;
}
