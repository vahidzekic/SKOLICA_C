#include <stdio.h>
 
int main() {
    float farh, celz;
    int mala, velika, step;

    mala = 0;
    velika = 300;
    step = 20;

    printf("Celzius Faranhajt\n");
    celz = mala;

    while (celz <= velika)
    {
        farh = (9.0 * celz)/ 5.0 + 32.0;
        printf("%3.0f %6.1f\n", celz, farh);
        celz = celz + step;
    }

}