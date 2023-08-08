#include <stdio.h>

int main(){
    int x = 10;
    int y = 200;
    int t;

    t = x;
    x = y;
    y = t;

    printf("x =  %d e y = %d\n",x,y);

    return 0;

}