#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define DIM 5
#define MAT_QTD 10

int main(){
    float mat[DIM][DIM];

    srand(time(NULL));

    // Gerar os dados

    //percorrer as linhas
    for (int k=0; k<DIM; k++){
        //percorrer as colunas
        for (int j=0; j<DIM; j++){
            mat[k][j] = ( ( (float) rand()) / RAND_MAX) * MAT_QTD;
        }
    }

     // imprimir a matriz
    for (int k=0; k<DIM; k++){
        for (int j=0; j<DIM; j++){
            printf("%.2lf ",mat[k][j]);
        }
        printf("\n");
    }

    // Obter o maior numero da diagonal principal
    float maior = mat[0][0];
    for (int k=1; k<DIM; k++){
        if (maior < mat[k][k]) maior = mat[k][k];
    }

    // Saída
    printf("Maior elemento da diagonal principal: %.2lf\n",maior);

    return 0;
}
