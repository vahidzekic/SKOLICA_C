/// fajl: Grupa4/01_Osnove_i_IO/predavanje_2/primer.c
#include <stdio.h>

int main(void) {
    int godine;
    float visina;

    printf("Unesite vase godine: ");
    scanf("%d", &godine);

    printf("Unesite vasu visinu (u metrima): ");
    scanf("%f", &visina);

    printf("Imate %d godina i visoki ste %.2f metara.\n", godine, visina);

    return 0;
}
