/// fajl: Grupa4/04_Petlje/predavanje_2/primer.c
#include <stdio.h>

int main(void) {
    double celsius, fahrenheit;

    printf("=== CELZIJUS U FARENHAJT ===\n");
    printf(" Celz. | Farenh.\n");
    printf("------|---------\n");
    for (celsius = 0.0; celsius <= 50.0; celsius += 10.0) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf(" %5.1f | %6.1f\n", celsius, fahrenheit);
    }

    printf("\n=== FARENHAJT U CELZIJUS ===\n");
    printf(" Farenh. | Celz.\n");
    printf("--------|-------\n");
    for (fahrenheit = 32.0; fahrenheit <= 122.0; fahrenheit += 18.0) {
        celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
        printf("  %5.1f  | %5.1f\n", fahrenheit, celsius);
    }

    return 0;
}
