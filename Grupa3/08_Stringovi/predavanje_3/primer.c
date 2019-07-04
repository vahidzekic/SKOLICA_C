/// fajl: Grupa3/08_Stringovi/predavanje_3/primer.c
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char tekst[] = "Programiranje C 2026";
    int i = 0;

    printf("Original: %s\n", tekst);

    while (tekst[i] != '\0') {
        if (islower((unsigned char)tekst[i])) {
            tekst[i] = (char)toupper((unsigned char)tekst[i]);
        }
        i++;
    }

    printf("Velikim slovima: %s\n", tekst);
    return 0;
}
