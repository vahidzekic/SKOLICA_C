/// fajl: Grupa4/01_Osnove_i_IO/predavanje_3/primer.c
#include <stdio.h>
#include <math.h>

int main(void) {
    double a = 5.0;
    double b = 3.0;

    double zbir = a + b;
    double proizvod = a * b;
    double stepen = pow(a, b); // a na stepen b

    printf("Zbir: %.2f\n", zbir);
    printf("Proizvod: %.2f\n", proizvod);
    printf("Stepenovanje (%.1f^%.1f): %.2f\n", a, b, stepen);

    return 0;
}
