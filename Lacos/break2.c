#include <stdio.h>

int main(){

    for (int k=0; k<5; k++){
        for (int j=0; j<3; j+=2){
            if (!(k % 2)) break;
            printf("%d\n",k);
        }
        printf("====\n");
    }

    return 0;
}