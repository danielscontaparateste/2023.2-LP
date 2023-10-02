#include <stdio.h>

#define TAM 3

int main(){
    char str[TAM];

    puts("Digite o seu nome: ");
    // gets(str);
    // fgets(str, TAM, stdin);
    scanf("%[^\n]",str);

    printf("Nome: %s\n",str);

    int k=0;
    while(str[k]!='\0'){
        printf("%d\n",str[k]);
        k++;
    }

    // Exercício: Como fica no scanf() para não ter problema de memória e não ter problemas com espaços na string? 


    return 0;

}