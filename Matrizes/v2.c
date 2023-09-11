#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 30
#define MX 100

int main(){

    int x[TAM];

    srand(time(NULL));

    // Entrada de Dados
    for (int k=0; k<TAM; k++){
        x[k] = rand()%MX;
    }

    puts("Vetor gerado: \n");
    for (int k = 0; k<TAM; k++){
        printf("[%p] %d\n",&x[k],x[k]);
    }

    // Processamento
    int maior= x[0];
    for (int k = 1; k<TAM; k++){
        if (x[k]>maior) maior = x[k];
    }

    // Saída
    printf("Maior: %d\n", maior);
    
    
    return 0;
}