/// fajl: Grupa2/06_Funkcije/predavanje_2/primer.c
#include <stdio.h>

// Deklaracije funkcija
double saberi(double x, double y);
double oduzmi(double x, double y);
double pomnozi(double x, double y);
double podeli(double x, double y);

int main(void) {
    double a, b;
    char op;

    printf("Unesite izraz (npr. 5 + 3): ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
        printf("Greska pri unosu izraza!\n");
        return 1;
    }

    switch (op) {
        case '+': printf("Rezultat: %.2f\n", saberi(a, b)); break;
        case '-': printf("Rezultat: %.2f\n", oduzmi(a, b)); break;
        case '*': printf("Rezultat: %.2f\n", pomnozi(a, b)); break;
        case '/': 
            if (b != 0.0) {
                printf("Rezultat: %.2f\n", podeli(a, b));
            } else {
                printf("Greska: Deljenje sa nulom!\n");
            }
            break;
        default: printf("Nepoznat operator: %c\n", op); break;
    }

    return 0;
}

double saberi(double x, double y) { return x + y; }
double oduzmi(double x, double y) { return x - y; }
double pomnozi(double x, double y) { return x * y; }
double podeli(double x, double y) { return x / y; }
