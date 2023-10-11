#include <stdio.h>

// Protótipo de Funções
int somar(int, int);
int multiplicar(int, int);

int main(){

    int a = 10, b = 7;
    int res;

    res = somar(a, b);
    
    printf("Soma: %d\n", res);

    res = multiplicar(a, b);
    
    printf("Multiplicação: %d\n", res);

    return 0;

}

int somar(int x, int y){
    return x + y;
}

int multiplicar(int x, int y){
    return x * y;
}