/// fajl: Grupa5/03_Kontrola_Toka/predavanje_2/primer.c
#include <stdio.h>

int main(void) {
    int poeni;

    printf("Unesite broj poena (0-100): ");
    scanf("%d", &poeni);

    if (poeni < 0 || poeni > 100) {
        printf("Nevazeci poeni!\n");
    } else {
        if (poeni >= 90) {
            printf("Ocena: 10\n");
        } else if (poeni >= 80) {
            printf("Ocena: 9\n");
        } else if (poeni >= 70) {
            printf("Ocena: 8\n");
        } else if (poeni >= 60) {
            printf("Ocena: 7\n");
        } else if (poeni >= 51) {
            printf("Ocena: 6\n");
        } else {
            printf("Niste polozili (Ocena: 5)\n");
        }
    }

    return 0;
}
