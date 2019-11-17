/// fajl: Grupa5/07_Pokazivaci_Pointers/predavanje_3/primer.c
#include <stdio.h>

// Funkcija prima adrese dve promenljive
void zameni(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x = 5, y = 10;
    printf("Pre zamene: x = %d, y = %d\n", x, y);
    zameni(&x, &y);
    printf("Posle zamene: x = %d, y = %d\n", x, y);
    return 0;
}
