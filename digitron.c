#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define OPERACIJE 100
#define BROJ '0'

int nadjiOperaciju(char []);
void gurni (double);
double operacija(void);


int main() {
    int tip;
    double operacije;
    char s[OPERACIJE];

    while ((tip = nadjiOperaciju(s)) != EOF) 
    {
        switch (tip)
        {
        // case BROJ:
        //     atof(s);
        //     break;
        
        case '+':
            gurni(operacija() + operacija());
            break;
        
        // case '*':
        //     gurni(operacija() * operacija());
        //     break;

        // case '-':
        //     operacije = operacija();
        //     gurni(operacija() + operacije);
        //     break;

        // case '/':
        //     operacije = operacija();
        //     if (operacije != 0.0)
        //         gurni(operacija() / operacije);
        //     else 
        //         printf ("GRESKA: Deljenje sa nulom nije moguce!\n");
        //     break;

        // case '%':
        //     operacije = operacija();
        //     if (operacije != 0.0)
        //         gurni(fmod(operacija(), operacije));
        //     else
        //         printf("GRESKA: Deljenje sa nulom nije moguce!\n");
        //     break;

        // case '\n':
        //     printf("\t%.8g\n", operacija());
        //     break;

        default:
            printf("GRESKA: Nepoznata komanda %s.", s);
            break;
        }
    }
    return 0;
}