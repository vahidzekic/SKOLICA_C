/// fajl: Grupa3/10_Rad_Sa_Fajlovima/predavanje_2/primer.c
#include <stdio.h>

int main(void) {
    FILE *f = fopen("studenti.txt", "w");
    if (f == NULL) {
        return 1;
    }

    // Pisanje formatiranih podataka
    fprintf(f, "Ime: %s | Prosek: %.2f\n", "Vahid", 9.85);
    fputs("Kraj baze podataka.\n", f);

    fclose(f);
    printf("Podaci su uspesno upisani.\n");
    return 0;
}
