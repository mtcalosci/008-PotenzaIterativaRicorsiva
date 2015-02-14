#include <stdio.h>
#include <stdlib.h>

int potenzaIterativa(int base, int esponente);
int potenzaRicorsiva(int base, int esponente, int c);

int main(int argc, char** argv) {
    int base,esponente;
    int rIterativo, rRicorsivo;
    int c = 0;
    
    printf("Inserisci la base (intera): ");
    scanf("%d", &base);
    printf("Inserisci l'esponente (intero non ngeativo): ");
    scanf("%d", &esponente);
    
    rIterativo = potenzaIterativa(base, esponente);
    rRicorsivo = potenzaRicorsiva(base, esponente,c);
    
    printf("%d^%d = %d (formulazione iterativa)\n", base, esponente, rIterativo);
    printf("%d^%d = %d (formulazione ricorsiva)\nLa chiamata finale e' la numero : %d", base, esponente, rRicorsivo);
    return (EXIT_SUCCESS);
}

int potenzaIterativa(int base, int esponente) {
    int ris;
    for(ris=1; esponente>0; esponente--)
    {
             ris = ris * base;  
    }
    return ris;
}
int potenzaRicorsiva(int base , int esponente, int c) {
    int ris=1;
    printf("Chiamata n: %d\n", c);
    if (esponente==0)
    {
       return ris;        
    }
    else
    {
        ris = base * potenzaRicorsiva(base , esponente-1, ++c);
        
    }
}
