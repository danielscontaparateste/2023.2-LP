#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10

struct Produto{
    int cod;
    float preco;
};

struct Estoque{
    int cod;
    int qtdProds;
    struct Produto *pProds;
};

void criarEstoque(struct Estoque *);
void exibirEstoque(struct Estoque *);
// void getMaiorPrecoEstoque(struct Estoque *, struct Produto **);
// void exibirProduto(char *, struct Produto *);


int main(int argc, char **argv){

    srand(time(NULL));

    if (argc!=2){
        printf("Use: \n\t %s <quantidade_produtos>\n\n",*argv);
        exit(1);
    }

    struct Estoque est;

    est.cod = rand() % MX;
    est.qtdProds = atoi(*(argv+1));
    est.pProds = (struct Produto *) malloc(est.qtdProds * sizeof(struct Produto));

    criarEstoque(&est);

    exibirEstoque(&est);

    // struct Produto *prodMaiorPreco;
    // getMaiorPrecoEstoque(&est, &prodMaiorPreco);

    // exibirProduto("Produto de Maior Valor : ", prodMaiorPreco);
    

    return 0;

}

void criarEstoque(struct Estoque *pEst){

    for (int k=0; k<pEst->qtdProds; k++){
        pEst->pProds[k].cod = k+1;
        pEst->pProds[k].preco = ((float) rand() / RAND_MAX) * 100;
    }
}

void exibirEstoque(struct Estoque *pEst){

    for (int k=0; k<pEst->qtdProds; k++){
        puts("=====");
        printf("Cod: %d\n", pEst->pProds[k].cod);
        printf("Valor: %.2f\n", pEst->pProds[k].preco); 
    }
}

// void getMaiorPrecoEstoque(struct Produto *p, int q, struct Produto **pMaiorPreco){

//     *pMaiorPreco = p;
//     for (int k=1; k<q; k++){
//         if ( (p + k)->preco > ((*pMaiorPreco)->preco) ){
//             *pMaiorPreco = p+k;
//         }
//     }
    
// }



// void exibirProduto(char *msg, struct Produto *pprod){
//     printf("#### \n\t\t %s \n#####\n",msg);
//     printf("Cod: %d\n", pprod->cod);
//     printf("Valor: %.2f\n", pprod->preco);
//     printf("\n");
// }
