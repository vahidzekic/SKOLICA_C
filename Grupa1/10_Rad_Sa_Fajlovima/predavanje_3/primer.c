/// fajl: Grupa1/10_Rad_Sa_Fajlovima/predavanje_3/primer.c
#include <stdio.h>

int main(void) {
    char linija[100];
    FILE *f = fopen("studenti.txt", "r");

    if (f == NULL) {
        printf("Fajl ne postoji ili se ne moze otvoriti!\n");
        return 1;
    }

    printf("Sadrzaj fajla:\n");
    while (fgets(linija, sizeof(linija), f) != NULL) {
        printf("%s", linija);
    }

    fclose(f);
    return 0;
}
