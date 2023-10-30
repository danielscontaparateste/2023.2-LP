#include <stdio.h>

#define TAM 3

struct Aluno{
    char nome[40];
    float notas[TAM];
    float media;
};

void lerNotas(float *, int);
float calcularMedia(float *, int);

int main(){
   struct Aluno a1, a2;

   puts("**Entre com os dados do 1o aluno: ");
   puts("Nome: ");
   scanf("%s",a1.nome);
   puts("Entre com as notas: ");
   lerNotas(a1.notas, TAM);
   a1.media = calcularMedia(a1.notas, TAM);

   puts("**Entre com os dados do 2o aluno: ");
   puts("Nome: ");
   scanf("%s",a2.nome);
   puts("Entre com as notas: ");
   lerNotas(a2.notas, TAM);
   a2.media = calcularMedia(a2.notas, TAM);

   //Saída
   puts("====");
   printf("Média do Aluno 1 (%s): %.2f\n",a1.nome,a1.media);
   printf("Média do Aluno 2 (%s): %.2f\n",a2.nome,a2.media);  

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