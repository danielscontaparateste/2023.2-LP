#include <stdio.h>


int main(){

    unsigned idade;

    puts("Digite sua idade: ");
    scanf("%u",&idade);

    if (idade < 16){
        puts("Não votar, não dirigir.\n");
    }else if (idade < 18){
        puts("Votar, não dirigir.\n");
    }else{
        puts("Votar, Dirigir.\n");
    }

    return 0;

}