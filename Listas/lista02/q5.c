#include <stdio.h>

int main(){


    /*** Proposta 1 *****/
    // int n, maior;
    // puts("Digite um número: ");
    // scanf("%d",&n);
    // maior = n;
    
    // while(n!=0){
    //     if (n> maior) maior = n;
    //     printf("O maior número é: %d\n", maior);
    //     puts("Digite um número: ");
    //     scanf("%d",&n);
    // }

    // puts("Tchau!\n");

    /*** Proposta 2 ***/

    int n, maior;
    int k=0;

    do{
        puts("Digite um número: ");
        scanf("%d",&n);
        if (!k++)  maior = n;
        if (n > maior) maior = n;
        if (n) printf("O maior valor fornecido é: %d\n", maior);
    
    }while(n!=0);

    puts("Tchau!\n");
    
    return 0;
}