/// fajl: Grupa5/14_Napredne_Strukture_Podataka/predavanje_2/primer.c
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

void ispisi_listu(Cvor *glava) {
    Cvor *tekuci = glava;
    while (tekuci != NULL) {
        printf("%d -> ", tekuci->podatak);
        tekuci = tekuci->sledeci;
    }
    printf("NULL\n");
}

int main(void) {
    Cvor *glava = NULL;
    glava = dodaj(glava, 30);
    glava = dodaj(glava, 20);
    glava = dodaj(glava, 10);

    printf("Elementi liste: ");
    ispisi_listu(glava);

    // Oslobadjanje
    Cvor *tekuci = glava;
    while (tekuci != NULL) {
        Cvor *pom = tekuci->sledeci;
        free(tekuci);
        tekuci = pom;
    }
    return 0;
}
