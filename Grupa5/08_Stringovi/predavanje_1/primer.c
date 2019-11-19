/// fajl: Grupa5/08_Stringovi/predavanje_1/primer.c
#include <stdio.h>

int main(void) {
    char ime[30];

    printf("Unesite vase ime: ");
    // fgets(niz, max_duzina, ulazni_tok)
    if (fgets(ime, sizeof(ime), stdin) != NULL) {
        printf("Zdravo, %s", ime); // fgets ucitava i znak za novi red '\n'
    }

    return 0;
}
