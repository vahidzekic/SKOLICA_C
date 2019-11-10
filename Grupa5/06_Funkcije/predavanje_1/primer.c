/// fajl: Grupa5/06_Funkcije/predavanje_1/primer.c
#include <stdio.h>

// Prototipe funkcije
double kvadrat(double x);

int main(void) {
    double br = 4.0;
    double rez = kvadrat(br);
    printf("Kvadrat broja %.2f je %.2f\n", br, rez);
    return 0;
}

// Definicija funkcije
double kvadrat(double x) {
    return x * x;
}
