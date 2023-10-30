#include <stdio.h>

#define QTDNOTAS 3
#define QTDALUNOS 3

struct Aluno{
    char nome[40];
    float notas[QTDNOTAS];
    float media;
};

void lerNotas(float *, int);
float calcularMedia(float *, int);

int main(){
    struct Aluno als[QTDALUNOS];

    for (int k=0; k<QTDALUNOS; k++){
        printf("**Entre com os dados do %d aluno: \n",k+1);
        puts("Nome: ");
        scanf("%s",als[k].nome);
        puts("Entre com as notas: ");
        lerNotas(als[k].notas, QTDNOTAS);
        als[k].media = calcularMedia(als[k].notas, QTDNOTAS);
    }

    //Saída
    puts("====");
    for (int k=0; k<QTDALUNOS; k++){
        printf("Média do Aluno %d (%s): %.2f\n",k+1,als[k].nome,als[k].media);
    }

    return 0;
    
}

void lerNotas(float *p, int q){
    for (int k=0; k<q; k++){
        printf("Nota %d:\n",k+1);
        scanf("%f",p+k);        
    }
}

float calcularMedia(float *p, int q){
    float s=0.0;
    for(int k=0; k<q; k++){
        s += *(p+k);
    }
    return s/q;
}