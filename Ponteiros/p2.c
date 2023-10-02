#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define VAR_NUM 100
#define INI 0

int main(){
    int v[TAM];
    int *pv = v; // int *pv = &v[0];

    // Gerar dados
    srand(time(NULL));
    for (int k=0; k<TAM; k++){
        *(pv+k) = INI + rand() % VAR_NUM; 
    }

    // Exibir dados
    for (int k=0; k<TAM; k++){
        printf("[%p] %d - %d - %d - %d\n",pv+k,*(pv+k),*(v+k),pv[k],v[k]);
    }
    
    return 0;
}