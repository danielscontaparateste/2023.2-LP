#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 100
#define LIN 3
#define COL 4

int main(){
    int *m[LIN];
    int lin1[COL], lin2[COL], lin3[COL];

    m[0] = lin1;
    m[1] = lin2;
    m[2] = lin3;

    srand(time(NULL));

    for (int k=0; k<LIN; k++){
        for (int j=0; j<COL; j++){
            *(*(m+k) + j) = rand() % MX;
        }
    }

    for (int k=0; k<LIN; k++){
        for (int j=0; j<COL; j++){
            printf("%5d ", *(*(m+k) + j));
        }
        printf("\n");
    }

    return 0;
}