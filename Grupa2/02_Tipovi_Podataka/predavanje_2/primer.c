/// fajl: Grupa2/02_Tipovi_Podataka/predavanje_2/primer.c
#include <stdio.h>
#include <float.h>

int main(void) {
    float f = 3.1415926535f;
    double d = 3.141592653589793;

    printf("Float (ispisan sa 10 decimala): %.10f (Zauzima %lu bajta)\n", f, sizeof(f));
    printf("Double (ispisan sa 15 decimala): %.15f (Zauzima %lu bajta)\n", d, sizeof(d));
    return 0;
}
