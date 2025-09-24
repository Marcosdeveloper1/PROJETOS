#include <stdio.h>

int main(){

    /*
    Soma: +
    Subtração: -
    Multiplicação: *
    Divisão: /
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com o número 1: \n");
    scanf("%d", &numero1);

    printf("Entre com o número 2: \n");
    scanf("%d", &numero2);

    soma = numero1 + numero2; // oeperação de soma

    subtracao = numero1 - numero2; // operação de subtração

    multiplicacao = numero1 * numero2; // operação de multiplicação

    divisao = numero1 / numero2; // operação de divisão

    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %d\n", divisao);
    
}