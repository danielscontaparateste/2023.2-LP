#include <stdio.h>

int main(){
    int x, y, z;
    int *px = NULL, *py = &y, *pz = &z;
    px = &x;

    puts("Digite x: ");
    scanf("%d",px);

    puts("Digite y: ");
    scanf("%d",py);

    *pz = *px + *py;

    printf("Soma: %d\n",*pz);

    return 0;


}