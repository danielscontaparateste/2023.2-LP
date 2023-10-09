#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0
#define QTD 100

#define LIN 5
#define COL 3

int main(){
    int mat[LIN][COL];
    
    int *p = NULL;

    // p = &mat[0][0];
    // p = mat[0];
    p = *mat;

    //Gerar dados
    srand(time(NULL));
    for (int k=0; k<LIN*COL; k++){
        *(p+k) = INI + rand() % QTD;
        
    }

    for (int k=0; k<LIN*COL; k++){
        if (!(k % COL)) printf("\n");
        // printf("%d\t", *(p+k));
        printf("%5d ",*(p+k));
    }
    
    printf("\n");

    int cLin, cCol;
    puts("Digite o índice da linha do elemento que deseja exibir: ");
    scanf("%d", &cLin);
    puts("Digite o índice da coluna do elemento que deseja exibir: ");
    scanf("%d", &cCol);

    // printf("\n\nO elemento escolhido foi: %d \n", *(p + cLin * col + cCol));  
    printf("\n\nO elemento selecionado foi: %d \n", p[cLin * COL + cCol]);  
    

    return 0;


}