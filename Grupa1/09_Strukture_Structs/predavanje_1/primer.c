/// fajl: Grupa1/09_Strukture_Structs/predavanje_1/primer.c
#include <stdio.h>

typedef struct {
    char naslov[50];
    char autor[50];
    int godina;
} Knjiga;

int main(void) {
    Knjiga k1 = {"Na Drini cuprija", "Ivo Andric", 1945};

    printf("Naslov: %s\n", k1.naslov);
    printf("Autor: %s\n", k1.autor);
    printf("Godina izdanja: %d\n", k1.godina);

    return 0;
}
