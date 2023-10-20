#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0 
#define QTD 100

void gerarVetor(int *, int, int, int);
void exibirVetor(int *, int);
void ordenacaoBolha(int *, int );
void ordenacaoSelecao(int *, int );
void calcularMediana(int *, int, float *, void (*pF) (int *, int));


int main(int argc, char *argv[]){
    if (argc!=2){
        printf("Uso:\n\t%s <quantidadeElementosVetor>",*argv);
        exit(1);
    }

    // int n = atoi(argv[1]); 
    int n = atoi(*(argv+1));

    // Alocação de memória
    int *px = NULL;
    if (!(px = (int*) malloc(n * sizeof(int)))){
        puts("Não há memória disponível. ");
        exit(2);
    }
    
    srand(time(NULL));
    gerarVetor(px, n, INI, QTD);
    
    puts("Vetor Gerado");
    exibirVetor(px, n);

    puts("=====");

    float med;
    calcularMediana(px, n, &med, ordenacaoBolha);

    puts("Resultado: ");
    printf("Valor Mediana: %.2f\n\n",med);


    puts("Vetor ordenado");
    exibirVetor(px,n);
    
    free(px);

    return 0;

}

void gerarVetor(int *p, int t, int orig, int mx){
    // Gerar os dados
    for (int k=0; k<t; k++){
        *(p+k) = orig + rand()%mx;
    }
}

void exibirVetor(int *p, int t){
    for (int k=0; k<t; k++){
        printf("[%p] %d\n",p+k,*(p+k));
    }
}

void ordenacaoBolha(int *p, int t){
    for (int k=0; k<t; k++){
        for (int j=0; j<t-1; j++){
            if (p[j]>p[j+1]){
                // Realizar a troca 
                p[j] = p[j] ^ p[j+1];
                p[j+1] = p[j] ^ p[j+1];
                p[j] = p[j] ^ p[j+1];
            }
        }
    }
}

void ordenacaoSelecao(int *p, int t){
    for (int k=0; k<t-1; k++){
        for (int j=k+1; j<t; j++){
            if (p[k]>p[j]){ // Ordenacao crescente. 
                // Realizar a troca 
                p[k] = p[k] ^ p[j];
                p[j] = p[k] ^ p[j];
                p[k] = p[k] ^ p[j];
            } 
        }
    }
}

void calcularMediana(int *p, int t, float *pMed, void (*pF) (int *, int)){
    (*pF)(p,t);
    *pMed = (t % 2)?*(p + t/2):(*(p+(t/2-1)) + *(p+t/2))/2.0; 

}