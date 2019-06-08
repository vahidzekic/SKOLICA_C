/// fajl: Grupa3/03_Kontrola_Toka/predavanje_1/primer.c
#include <stdio.h>

int main(void) {
    int broj;

    printf("Unesite ceo broj: ");
    if (scanf("%d", &broj) != 1) {
        printf("Greska pri unosu!\n");
        return 1;
    }

    if (broj % 2 == 0) {
        printf("Broj %d je PARAN.\n", broj);
    } else {
        printf("Broj %d je NEPARAN.\n", broj);
    }

    return 0;
}
