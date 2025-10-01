#include <stdio.h>

int main(){

    float nota1;
    float pontuacaominima = 5.0;

    printf("Digite sua nota:\n");
    scanf("%f",&nota1);
    

    if (nota1 > pontuacaominima)
        printf("Parabéns vc está aprovado!\n");
    else
        printf("Vc está reprovado!\n");



}