/// fajl: Grupa4/13_Preprocesor_i_Makroi/predavanje_3/primer.c
#include <stdio.h>

#define DEBUG_MOD

int main(void) {
#ifdef DEBUG_MOD
    printf("[DEBUG] Program je pokrenut u debug modu.\n");
#endif

    printf("Glavni program izvrsava zadatak.\n");

    return 0;
}
