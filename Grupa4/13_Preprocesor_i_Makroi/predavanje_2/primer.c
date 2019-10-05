/// fajl: Grupa4/13_Preprocesor_i_Makroi/predavanje_2/primer.c
#include <stdio.h>

// Pravilno zagradjivanje da bi se sacuvao prioritet operacija
#define KVADRAT(x) ((x) * (x))
#define MAKS(a, b) (((a) > (b)) ? (a) : (b))

int main(void) {
    int n = 3;
    printf("Kvadrat od %d je %d\n", n, KVADRAT(n));
    // Bez zagrada bi KVADRAT(n + 1) bio n + 1 * n + 1 = 3 + 3 + 1 = 7, a sa zagradama je (3+1)*(3+1) = 16
    printf("Kvadrat od %d+1 je %d\n", n, KVADRAT(n + 1));
    printf("Maksimum od 10 i 20 je %d\n", MAKS(10, 20));
    return 0;
}
