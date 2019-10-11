/// fajl: Grupa4/14_Napredne_Strukture_Podataka/predavanje_3/primer.c
#include <stdio.h>
#include <stdlib.h>

typedef struct Cvor {
    int podatak;
    struct Cvor *sledeci;
} Cvor;

Cvor* dodaj(Cvor *glava, int val) {
    Cvor *novi = (Cvor*)malloc(sizeof(Cvor));
    if (novi == NULL) return glava;
    novi->podatak = val;
    novi->sledeci = glava;
    return novi;
}

Cvor* obrisi_cvor(Cvor *glava, int kljuc) {
    Cvor *tekuci = glava;
    Cvor *prethodni = NULL;

    // Ako je glava sama po sebi kljuc koji se brise
    if (tekuci != NULL && tekuci->podatak == kljuc) {
        glava = tekuci->sledeci;
        free(tekuci);
        return glava;
    }

    // Trazenje kljuca
    while (tekuci != NULL && tekuci->podatak != kljuc) {
        prethodni = tekuci;
        tekuci = tekuci->sledeci;
    }

    // Kljuc nije pronadjen
    if (tekuci == NULL) return glava;

    // Preusmeravanje i oslobadjanje
    prethodni->sledeci = tekuci->sledeci;
    free(tekuci);

    return glava;
}

void ispisi(Cvor *glava) {
    Cvor *t = glava;
    while (t != NULL) {
        printf("%d -> ", t->podatak);
        t = t->sledeci;
    }
    printf("NULL\n");
}

int main(void) {
    Cvor *glava = NULL;
    glava = dodaj(glava, 3);
    glava = dodaj(glava, 2);
    glava = dodaj(glava, 1);

    printf("Pre brisanja: ");
    ispisi(glava);

    glava = obrisi_cvor(glava, 2);

    printf("Posle brisanja: ");
    ispisi(glava);

    // Oslobadjanje preostale memorije
    Cvor *t = glava;
    while (t != NULL) {
        Cvor *pom = t->sledeci;
        free(t);
        t = pom;
    }

    return 0;
}
