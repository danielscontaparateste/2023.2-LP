#include <stdio.h>

#define N_EVENT 3

int main(){
    int c, p;
    float t_total=0;
    
    for (int i=0; i< N_EVENT; i++){
        printf("Entre com o tempo de CPU do evento %d: \n ",i+1);
        scanf("%d",&c);
        printf("Entre com o período do evento %d: \n ",i+1);
        scanf("%d",&p);

        t_total += ((float)c) / p; 
    }

    (t_total>1)?printf("O sistema é NÃO escalonável. Tempo Total: %.2f\n", t_total):printf("O sistema é escalonável. Tempo Total: %.2f\n", t_total);

    return 0;
}