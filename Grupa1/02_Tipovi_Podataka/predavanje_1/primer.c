/// fajl: Grupa1/02_Tipovi_Podataka/predavanje_1/primer.c
#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("Velicina char: %lu bajt (Opseg: %d do %d)\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("Velicina short: %lu bajta (Opseg: %d do %d)\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("Velicina int: %lu bajta (Opseg: %d do %d)\n", sizeof(int), INT_MIN, INT_MAX);
    printf("Velicina long: %lu bajtova (Opseg: %ld do %ld)\n", sizeof(long), LONG_MIN, LONG_MAX);
    return 0;
}
