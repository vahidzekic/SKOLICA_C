/// fajl: Grupa4/12_Bitovne_Operacije/predavanje_1/primer.c
#include <stdio.h>

int main(void) {
    unsigned char a = 12; // 0000 1100
    unsigned char b = 9;  // 0000 1001

    printf("a & b = %d\n", a & b); // 0000 1000 = 8
    printf("a | b = %d\n", a | b); // 0000 1101 = 13
    printf("a ^ b = %d\n", a ^ b); // 0000 0101 = 5
    printf("~a = %d\n", (unsigned char)~a);   // 1111 0011 = 243

    return 0;
}
