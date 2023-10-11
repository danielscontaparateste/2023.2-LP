#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Protótipo de Funções
void somar(int, int, int* );
void gerarVetor(int *, int, int, int);
void somarVetor(int *, int t, int *);
void exibirVetor(int *, int);

#define TAM 3
#define INI 0
#define QTD 10

int main(){

    int a = 10, b = 7;
    int res;
    int v[TAM];

    // int v[] = {10, 1, 5};

    // Gerar vetor
    srand(time(NULL));
    gerarVetor(v, INI, QTD, TAM);
    exibirVetor(v, TAM);
    
    somar(a, b, &res);
    printf("Soma: %d\n", res);

    somarVetor(v, TAM, &res);
    
    printf("Somatório do Vetor: %d\n", res);

    return 0;

}

void somar(int x, int y, int *pr){
    *pr = x + y;
}

void somarVetor(int *pv, int t, int *res){
    int s = 0;  
    for (int k=0; k<t; k++){
        s += *(pv+k);
    }
    *res = s;
}

void gerarVetor(int *pv, int d, int q, int t){
    for (int k=0; k<t; k++){
        *(pv+k) = d + rand() % q; 
    }
}

void exibirVetor(int *pv, int t){
    for (int k=0; k<t; k++ ){
        printf("[%p] %d\n",pv+k, *(pv+k));
    }
}