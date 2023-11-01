#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Produto{
    int cod;
    float preco;
};

#define QTD_PRODUTOS 10

void criarEstoque(struct Produto *, int);
void exibirEstoque(struct Produto *, int);
// struct Produto *getMaiorPrecoEstoque(struct Produto *, int);
void getMaiorPrecoEstoque(struct Produto *, int, struct Produto **);
void exibirProduto(char *, struct Produto *);


int main(){
    struct Produto estoque[QTD_PRODUTOS];

    srand(time(NULL));
    criarEstoque(estoque, QTD_PRODUTOS);

    exibirEstoque(estoque, QTD_PRODUTOS);

    struct Produto *prodMaiorPreco;
    getMaiorPrecoEstoque(estoque, QTD_PRODUTOS, &prodMaiorPreco);

    exibirProduto("Produto de Maior Valor : ", prodMaiorPreco);
    

    return 0;

}

void criarEstoque(struct Produto *p, int q){

    for (int k=0; k<q; k++){
        (p+k)->cod = k+1;
        (p+k)->preco = ((float) rand() / RAND_MAX) * 100;
    }
}

void exibirEstoque(struct Produto *p, int q){

    for (int k=0; k<q; k++){
        puts("=====");
        printf("Cod: %d\n", (p+k)->cod);
        printf("Valor: %.2f\n", (p+k)->preco); 
    }
}

void getMaiorPrecoEstoque(struct Produto *p, int q, struct Produto **pMaiorPreco){

    *pMaiorPreco = p;
    for (int k=1; k<q; k++){
        if ( (p + k)->preco > ((*pMaiorPreco)->preco) ){
            *pMaiorPreco = p+k;
        }
    }
    
}

// struct Produto *getMaiorPrecoEstoque(struct Produto *p, int q){

//     struct Produto *pMaiorPreco = p;
//     for (int k=1; k<q; k++){
//         if ( (p + k)->preco > (pMaiorPreco->preco) ){
//             pMaiorPreco = p+k;
//         }
//     }

//     return pMaiorPreco;
// }

void exibirProduto(char *msg, struct Produto *pprod){
    printf("#### \n\t\t %s \n#####\n",msg);
    printf("Cod: %d\n", pprod->cod);
    printf("Valor: %.2f\n", pprod->preco);
    printf("\n");
}
