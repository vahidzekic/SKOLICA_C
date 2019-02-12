/// fajl: Grupa1/08_Stringovi/predavanje_2/primer.c
#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[30] = "SKOLICA";
    char s2[15] = " C";
    char kopija[30];

    printf("Duzina s1: %lu\n", strlen(s1));

    strcpy(kopija, s1);
    printf("Kopija s1: %s\n", kopija);

    strcat(s1, s2);
    printf("Nakon spajanja (s1): %s\n", s1);

    if (strcmp(s1, kopija) == 0) {
        printf("Stringovi su jednaki.\n");
    } else {
        printf("Stringovi su razliciti.\n");
    }

    return 0;
}
