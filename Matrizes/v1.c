#include <stdio.h>

#define QTD_NOTAS 3
#define NOTA_APROVA 7.0

int main(){

    float notas[QTD_NOTAS];

    // Entrada de Dados
    for (int k=0; k<QTD_NOTAS; k++){
        printf("Digite a Nota: %d\n",k+1);
        scanf("%f",&notas[k]);
    }

    // Processamento
    float s, media = 0;
    for (int k=0; k<QTD_NOTAS; k++){
        s += notas[k];
    }
    media = s / QTD_NOTAS;

    // Saída
    printf("Média: %.2f - ",media);
    (media<NOTA_APROVA)?printf("REPROVADO\n"):printf("APROVADO\n");
    
    return 0;
}