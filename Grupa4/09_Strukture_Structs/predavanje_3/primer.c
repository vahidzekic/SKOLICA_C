/// fajl: Grupa4/09_Strukture_Structs/predavanje_3/primer.c
#include <stdio.h>

typedef struct {
    int x;
    int y;
} Tacka;

void pomeri(Tacka *t, int dx, int dy) {
    t->x += dx;
    t->y += dy;
}

int main(void) {
    Tacka t1 = {10, 20};
    printf("Pre pomeranja: (%d, %d)\n", t1.x, t1.y);
    pomeri(&t1, 5, -10);
    printf("Posle pomeranja: (%d, %d)\n", t1.x, t1.y);
    return 0;
}
