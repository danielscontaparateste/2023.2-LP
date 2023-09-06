#include <stdio.h>

int main(){
    unsigned char x = 15;
    unsigned char mask = 1;

    unsigned char t;

    puts("Equipamentos Ligados: ");
    for (int i=0; i < 8; i++){
        t = (x >> i) & mask; 
        // printf("%d\n",t);
        if (t) printf("Equipamento: %d\n",i+1);

    }
    
    return 0;
}