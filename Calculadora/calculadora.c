#include <stdio.h>

int main(){

    /*
    Soma: +
    Subtração: -
    Multiplicação: *
    Divisão: /

    float quoeciente = (float ) a / b; // "a" é convertido explicitamente para float

    no caso daqui como estamos trabalhando com notas, elas por si só são em formatos decimais. por isso a escolha de float para a conversão.
    */

    float nota1, nota2,nota3;
    float media;

    printf("**** BEM-VINDO AO PROGRAMA CALCULO DE MEDIA ****\n");


    printf("Digite a nota 1: \n");
    scanf("%f", &nota1);

    printf("Digite a nota 2: \n");
    scanf("%f", &nota2);

    printf("Digite a nota 3: \n");
    scanf("%f", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3; // oeperação de soma



    printf("A média das notas é: %.1f,\n", media);

    /*
    printf("A média das notas é: %d,\n", soma);
    printf("Os numeros que vc mandou são esses: %d, %d\n", numero1, numero2);
   

    if (soma >=10){

        printf("Aprovado! Parabéns!");
    } else{
        printf("Reprovado2!");
    }
    */

    return 0;
}