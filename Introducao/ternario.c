#include <stdio.h>

int main(){
    int x; //, y;
    
    puts("Digite um número: ");
    scanf("%d",&x);

    // if (x%2){
    //     puts("IMPAR\n");
    // }else{
    //     puts("PAR\n");
    // }

    // (x%2)?puts("IMPAR\n"):puts("PAR\n"); // Operador ternário

    // x = (x%2)?x*3:x*2;

    // printf("Valor = %d\n",(x%2)?x*3:x*2);

    x *= (x%2)?3:2;

    printf("x = %d\n",x);
    

    return 0;

}