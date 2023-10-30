#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Produto{
    int cod;
    float preco;
};

#define QTD_PRODUTOS 10

void criarEstoque(struct Produto *p, int q);
void exibirEstoque(struct Produto *p, int q);

int main(){
    struct Produto estoque[QTD_PRODUTOS];

    criarEstoque(estoque, QTD_PRODUTOS);

    exibirEstoque(estoque, QTD_PRODUTOS);

    // struct Produto *prodMaiorPreco;
    // getMaiorPrecoEstoque(estoque, QTD_PRODUTOS, prodMaiorPreco);

    // exibirProduto(prodMaiorPreco);

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
