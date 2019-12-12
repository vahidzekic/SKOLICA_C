/// fajl: Grupa5/13_Preprocesor_i_Makroi/predavanje_1/primer.c
#include <stdio.h>

#define PI 3.14159
#define MAKS_STUDENATA 100

int main(void) {
    double r = 5.0;
    double povrsina = r * r * PI;

    printf("Povrsina kruga: %.2f\n", povrsina);
    printf("Maksimalan broj studenata: %d\n", MAKS_STUDENATA);

    return 0;
}
