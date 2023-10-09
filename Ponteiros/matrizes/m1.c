#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0
#define QTD 100

int main(){
    int *p = NULL;
    int lin, col;

    puts("Digite a quantidade de linhas: ");
    scanf("%d",&lin);

    puts("Digite a quantidade de colunas: ");
    scanf("%d",&col);

    p = (int*) malloc(lin * col * sizeof(int));

    //Gerar dados
    srand(time(NULL));
    for (int k=0; k<lin*col; k++){
        *(p+k) = INI + rand() % QTD;
        
    }

    for (int k=0; k<lin*col; k++){
        if (!(k % col)) printf("\n");
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
    printf("\n\nO elemento selecionado foi: %d \n", p[cLin * col + cCol]);  
    

    free(p);

    return 0;


}