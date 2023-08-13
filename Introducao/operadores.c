#include <stdio.h>

int main(){
    int x = 10;

    // x = x + 1; // x++; // x+=1;

    puts("==== Incremento após a variável ====");

    printf("x = %d\n",x++);
    
    printf("x = %d\n",x++);

    printf("x = %d\n",x);

    puts("==== Incremento antes da variável ====");

    x = 11;

    printf("x = %d\n",++x);
    
    printf("x = %d\n",++x);

    printf("x = %d\n",x);

    puts("==== Operadores Relacionais e Lógicos ====");

    // Reescrever o código a seguir para o uso do operador ternário.

    if (!(x % 2)){
        puts("PAR");
    }else{
        puts("IMPAR");
    }
    

    return 0;
}