/// fajl: Grupa2/12_Bitovne_Operacije/predavanje_2/primer.c
#include <stdio.h>

int main(void) {
    unsigned int x = 5; // 0000 0101

    printf("x << 1 = %u (Mnozenje sa 2)\n", x << 1); // 10 (0000 1010)
    printf("x << 2 = %u (Mnozenje sa 4)\n", x << 2); // 20 (0001 0100)
    printf("x >> 1 = %u (Deljenje sa 2)\n", x >> 1); // 2  (0000 0010)

    return 0;
}
