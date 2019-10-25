/// fajl: Grupa5/02_Tipovi_Podataka/predavanje_3/primer.c
#include <stdio.h>

int main(void) {
    int a = 17;
    int b = 5;

    // Celobrojno deljenje
    double rez_bez_kasta = a / b;
    // Eksplicitno kastovanje
    double rez_sa_kastom = (double)a / b;

    printf("Bez kastovanja (celobrojno): %.2f\n", rez_bez_kasta);
    printf("Sa kastovanjem (realno): %.2f\n", rez_sa_kastom);
    return 0;
}
