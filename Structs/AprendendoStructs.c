//primeiro código usando structs

#include <stdio.h>
#include <string.h>

struct Produto {
    float preco;
    int quantidade;
    char nome[20];
};

int main() {
    //struct cria o molde chamado Produto. o p1 é a variável.
    struct Produto p1;

    //definindo valores para a variável p1.
    strcpy(p1.nome, "Ração");
    p1.preco = 32.50;
    p1.quantidade = 20;

    printf("\n Bem-vindo ao sistema!\n");
    printf("\n O nome do produto selecionado é %s \n", p1.nome);
    printf("\n O preço do produto selecionado é R$ %.2f\n", p1.preco);
    printf("\n A quantidade existente do produto é %d unidades\n", p1.quantidade);
    
    return 0;
}
