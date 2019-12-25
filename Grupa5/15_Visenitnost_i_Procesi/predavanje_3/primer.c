/// fajl: Grupa5/15_Visenitnost_i_Procesi/predavanje_3/primer.c
#include <stdio.h>
#include <pthread.h>

#define BROJ_ITERACIJA 10000

int brojac = 0;
pthread_mutex_t kljuc;

void* inkrementiraj(void *arg) {
    (void)arg;
    for (int i = 0; i < BROJ_ITERACIJA; i++) {
        pthread_mutex_lock(&kljuc);
        brojac++; // Kriticna sekcija
        pthread_mutex_unlock(&kljuc);
    }
    return NULL;
}

int main(void) {
    pthread_t nit1, nit2;

    // Inicijalizacija mutexa
    pthread_mutex_init(&kljuc, NULL);

    pthread_create(&nit1, NULL, inkrementiraj, NULL);
    pthread_create(&nit2, NULL, inkrementiraj, NULL);

    pthread_join(nit1, NULL);
    pthread_join(nit2, NULL);

    printf("Konacna vrednost brojaca (ocekivano %d): %d\n", BROJ_ITERACIJA * 2, brojac);

    // Unistavanje mutexa
    pthread_mutex_destroy(&kljuc);

    return 0;
}
