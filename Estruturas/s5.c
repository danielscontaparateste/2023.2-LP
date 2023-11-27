#include <stdio.h>

union est1{
    int x;
    char ch;
    float f;
};


struct est2{
    int x;
    char ch;
    float f;
};

int main(){
    union est1 e1;
    // struct est2 e2;


    e1.x = 15000;
    
    printf("e1.x = %d\n",e1.x);
    printf("e1.x = %c\n",e1.ch);

    e1.ch = 'D';
    
    printf("e1.x = %d\n",e1.x);
    printf("e1.x = %c\n",e1.ch);

    puts("=======");

    printf("União: %lu\n", sizeof(union est1));
    printf("Estrutura: %lu\n", sizeof(struct est2));

    return 0;

}
