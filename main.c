#include <stdio.h>
#include <stdlib.h>

int potenzaIterativa(int base, int esponente);
int potenzaRicorsiva(int base, int esponente);

int main(int argc, char** argv) {
    int base,esponente;
    int rIterativo, rRicorsivo;
    
    printf("Inserisci la base (intera): ");
    scanf("%d", &base);
    printf("Inserisci l'esponente (intero non ngeativo): ");
    scanf("%d", &esponente);
    
    rIterativo = potenzaIterativa(base, esponente);
    rRicorsivo = potenzaIterativa(base, esponente);
    
    printf("%d^%d = %d (formulazione iterativa)\n", base, esponente, rIterativo);
    printf("%d^%d = %d (formulazione ricorsiva)\n", base, esponente, rRicorsivo);
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
int potenzaRicorsiva(int base, int esponente) {
    int ris;
    if (esponente==0)
    {
       return ris;        
    }
    else
    {
        ris = base*potenzaIterativa(base, esponente-1);
        return ris;
    }
}
