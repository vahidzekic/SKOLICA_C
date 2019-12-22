# Predavanje 1: Kreiranje Procesi sa fork() i wait()

## Teorijsko Objašnjenje
Funkcija `fork()` se koristi za kreiranje novog deteta procesa (child process). Dete proces je kopija roditelja i nastavlja izvršavanje od linije odmah posle poziva `fork()`. Roditelj proces čeka završetak deteta preko poziva `wait()`.
