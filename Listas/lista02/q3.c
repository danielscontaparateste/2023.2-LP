#include <stdio.h>

int main(){
    int f, n;

    puts("Digite um número: ");
    scanf("%d",&n);

    for (f = 1; n > 1; n--) f *= n;
    
    printf("Resultado: %d\n",f);

    return 0;

}