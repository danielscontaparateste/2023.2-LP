#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0 
#define QTD 100

void gerarVetor(int *, int, int, int);
void exibirVetor(int *, int);
int *obterPrimeiroPar(int *, int);

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

    int *pPar = obterPrimeiroPar(px, n);

    printf("Primeiro Par: %d\n", *pPar);
    
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

int *obterPrimeiroPar(int *p, int t){
    for (int k=0; k<t; k++){
        if (!(*(p+k) % 2)) return (p+k);
    }
    return NULL;
}