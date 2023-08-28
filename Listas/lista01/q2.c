#include <stdio.h>

int main(){
    int x;

    puts("Digite um valor inteiro: ");
    scanf("%d",&x);

    puts("====");
    printf("Decimal: %d\n",x);
    printf("Hexadecimal: %x\n",x);
    printf("Octal: %o\n",x);

    printf("Char: %c\n",x);

    return 0;
    
}