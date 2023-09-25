#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define VETOR_VALOR_MIN -50
#define VETOR_QTD 100

int main(){

    int x[TAM];

    // Geração de Dados
    srand(time(NULL));

    for (int k=0; k<TAM; k++){
        x[k] = VETOR_VALOR_MIN + (rand() % VETOR_QTD);
    }

    puts("Vetor gerado antes da ordenação: ");
    for (int k=0; k<TAM; k++){
        printf("[%p] %d\n",&x[k], x[k]);
    }

    // Processamento

    for (int k=0; k<TAM-1; k++){
        for (int j=k+1; j<TAM; j++){
            if (x[k]>x[j]){ // Ordenacao crescente. 
                // Realizar a troca 
                x[k] = x[k] ^ x[j];
                x[j] = x[k] ^ x[j];
                x[k] = x[k] ^ x[j];
            } 
        }
    }

    // Saída 
    puts("Vetor gerado DEPOIS da ordenação: ");
    for (int k=0; k<TAM; k++){
        printf("[%p] %d\n",&x[k], x[k]);
    }

    return 0;

}