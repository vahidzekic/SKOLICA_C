/// fajl: Grupa5/14_Napredne_Strukture_Podataka/predavanje_1/primer.c
#include <stdio.h>
#include <stdlib.h>

typedef struct Cvor {
    int podatak;
    struct Cvor *sledeci;
} Cvor;

// Dodavanje novog cvora na pocetak liste
Cvor* dodaj_na_pocetak(Cvor *glava, int vrednost) {
    Cvor *novi = (Cvor*)malloc(sizeof(Cvor));
    if (novi == NULL) return glava;
    novi->podatak = vrednost;
    novi->sledeci = glava;
    return novi;
}

int main(void) {
    Cvor *glava = NULL;

    glava = dodaj_na_pocetak(glava, 10);
    glava = dodaj_na_pocetak(glava, 20);

    printf("Lista je uspesno inicijalizovana.\n");

    // Oslobadjanje memorije
    Cvor *tekuci = glava;
    while (tekuci != NULL) {
        Cvor *pom = tekuci->sledeci;
        free(tekuci);
        tekuci = pom;
    }

    return 0;
}
