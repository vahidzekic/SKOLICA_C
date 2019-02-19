/// fajl: Grupa1/10_Rad_Sa_Fajlovima/predavanje_1/primer.c
#include <stdio.h>

int main(void) {
    FILE *f = fopen("test.txt", "w");

    if (f == NULL) {
        printf("Greska pri kreiranju fajla!\n");
        return 1;
    }

    printf("Fajl je uspesno kreiran.\n");
    fclose(f);

    return 0;
}
