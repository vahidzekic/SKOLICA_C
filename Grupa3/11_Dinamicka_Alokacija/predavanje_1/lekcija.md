# Predavanje 1: Dinamička Alokacija sa malloc i Oslobađanje memorije

## Teorijsko Objašnjenje
Dinamička dodela memorije se vrši na hipu (heap) tokom izvršavanja programa. Funkcija `malloc` prima broj bajtova koje treba alocirati, a vraća pokazivač tipa `void*`. Nakon upotrebe, alocirana memorija se **mora** osloboditi sa `free()`.
