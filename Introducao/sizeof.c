#include <stdio.h>

// Comentário de linha 

/*
    Comentários de múltiplas 
    linhas
*/

int main(){

    int x = 10;
    int y;
    float f =  20.30;
    double d = 50.60;
    char c = 30;

    printf("Digite um valor: \n");
    scanf("%d",&y);

    printf("O valor de y é %d\n",y);

    puts("=======");
    printf("Qtd. de bytes de x (int) : %lu\n",sizeof(x));
    printf("Qtd. de bytes de y (int) : %lu\n",sizeof(y));
    printf("Qtd. de bytes de f (float) : %lu\n",sizeof(f));
    printf("Qtd. de bytes de d (double) : %lu\n",sizeof(d));
    printf("Qtd. de bytes de c (char) : %lu\n",sizeof(c));
    printf("Qtd. de bytes de (long int) : %lu\n",sizeof(long int));
    printf("Qtd. de bytes de (short int) : %lu\n",sizeof(short int));

    return 0;
}