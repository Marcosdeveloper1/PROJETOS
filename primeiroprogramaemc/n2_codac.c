#include<stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];
    
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite sua matrícula: \n");
    scanf("%d", &matricula);

    //teste de printf
    //printf("Resultado de teste: \n", idade, matricula, altura, nome);

    
    printf("Nome do aluno: %s - Matricula: %d\n", nome, matricula);
    printf("Idade: %d - Altura: %f", idade, altura);
}