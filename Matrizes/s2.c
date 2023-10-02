#include <stdio.h>
#include <string.h>

#define TAM 80

int main(){
    char str[TAM];

    puts("Digite uma string: ");
    scanf("%[^\n]",str);

    long unsigned k=0;
    while(str[k]!='\0') k++;
        
    printf("Qtd de caracteres: %lu, com strlen: %lu\n", k, strlen(str) ); 

    return 0;
}