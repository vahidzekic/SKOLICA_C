/// fajl: Grupa1/09_Strukture_Structs/predavanje_2/primer.c
#include <stdio.h>

typedef struct {
    char ime[30];
    double prosek;
} Student;

int main(void) {
    Student studenti[3] = {
        {"Vahid", 9.5},
        {"Marko", 8.2},
        {"Jelena", 9.8}
    };

    printf("Spisak studenata:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s (Prosek: %.2f)\n", studenti[i].ime, studenti[i].prosek);
    }

    return 0;
}
