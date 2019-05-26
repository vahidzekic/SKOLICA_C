/// fajl: Grupa2/15_Visenitnost_i_Procesi/predavanje_2/primer.c
#include <stdio.h>
#include <pthread.h>

void* nit_funkcija(void *arg) {
    char *ime = (char*)arg;
    printf("Pozdrav iz niti: %s\n", ime);
    return NULL;
}

int main(void) {
    pthread_t nit1, nit2;

    pthread_create(&nit1, NULL, nit_funkcija, "NitA");
    pthread_create(&nit2, NULL, nit_funkcija, "NitB");

    // Cekanje da niti zavrse rad
    pthread_join(nit1, NULL);
    pthread_join(nit2, NULL);

    printf("Glavni program je zavrsen.\n");
    return 0;
}
