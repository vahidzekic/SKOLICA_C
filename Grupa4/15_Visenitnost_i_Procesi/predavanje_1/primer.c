/// fajl: Grupa4/15_Visenitnost_i_Procesi/predavanje_1/primer.c
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void) {
    pid_t pid = fork();

    if (pid < 0) {
        printf("Greska pri kreiranju procesa!\n");
        return 1;
    } else if (pid == 0) {
        // Izvrsava se u dete procesu
        printf("[DETE] Pozdrav iz dete procesa! PID: %d\n", getpid());
    } else {
        // Izvrsava se u roditeljskom procesu
        wait(NULL); // Ceka se zavrsetak dete procesa
        printf("[RODITELJ] Dete proces je zavrsio rad. Roditelj PID: %d\n", getpid());
    }

    return 0;
}
