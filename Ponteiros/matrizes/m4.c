#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 100

int main(){
    int **m = NULL;
    int lin, col;

    puts("Digite a quantidade de linhas: ");
    scanf("%d",&lin);

    puts("Digite a quantidade de colunas: ");
    scanf("%d",&col);
    
    // Alocação dinâmica de memória
    m = (int**) malloc(lin * sizeof(int*));
    
    for (int k=0; k<lin; k++){
        m[k] = malloc(col * sizeof(int));
    }

    srand(time(NULL));

    for (int k=0; k<lin; k++){
        for (int j=0; j<col; j++){
            *(*(m+k) + j) = rand() % MX;
        }
    }

    for (int k=0; k<lin; k++){
        for (int j=0; j<col; j++){
            printf("%5d", *(*(m+k) + j));
        }
        printf("\n");
    }

    for (int k=0; k<lin; k++){
        free(m[k]); 
    }

    free(m);

    return 0;
}