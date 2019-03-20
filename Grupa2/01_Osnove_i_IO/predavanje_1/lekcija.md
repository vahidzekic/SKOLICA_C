# Predavanje 1: Uvod u C i Struktura Programa

## Teorijsko Objašnjenje
C je kompajlirani, strukturirani programski jezik razvijen 1972. godine. Svaki C program počinje od funkcije `main`, koja predstavlja ulaznu tačku programa.

## Sintaksa i Memorijski Model
Kada se program pokrene, operativni sistem učitava izvršni fajl u memoriju (RAM) i predaje kontrolu funkciji `main`. Sve lokalne promenljive se alociraju na steku.

```c
#include <stdio.h> // Preprocesorska direktiva za standardni ulaz/izlaz

int main(void) {
    printf("Zdravo, svete!\n"); // Ispis na standardni izlaz
    return 0; // Povratna vrednost 0 označava uspešan završetak
}
```
