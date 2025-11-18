#include <stdio.h>

int main(){
    char variavel;

    printf("Digite um valorz\n");
    scanf("%c", &variavel);

    switch (variavel){
    case '1': //no caso de char ou strin precisamos colocar '' entre aspas simples
        printf("Código a ser executado se variavel  == 1\n");
        printf("teste do case 1");
    break; // para a execução do código do bloco acima
    case 2:
        printf("Código a ser executado se variavel  == 2\n");
    break;
    default:
        printf("Código a ser executado se a variavel  não for 1 ou 2\n");
    }
}

