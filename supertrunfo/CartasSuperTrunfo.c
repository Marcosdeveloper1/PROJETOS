#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


// Área para definição das variáveis para armazenar as propriedades das cidades
int main() {
    char estado[10];
    char codigo[5];
    char nome_cidade[10];
    int populacao;
    float area;
    int pib;
    int pontos_turisticos;

  //Mensagem de boas vindas
    printf("Seja bem vindo! Siga os passos abaixo por gentileza \n");

  // Área para entrada de dados
    printf("Digite o estado abaixo \n");
    scanf("%s",estado);     // input do estado

    printf("Digite o código abaixo\n");
    scanf("%s",codigo );    // input do codigo

    printf("Digite o nome da cidade abaixo\n");
    scanf("%s",nome_cidade );    // input do nome_cidade

    printf("Digite o numero da população abaixo\n");
    scanf("%d",&populacao );    // input do população

    printf("Digite o número da área abaixo\n");
    scanf("%f",&area );    // input do area

    printf("Digite o número do PIB abaixo\n");
    scanf("%d", &pib);    // input do pib
    
    printf("Digite quantos Pontos Turísticos abaixo\n");
    scanf("%d", &pontos_turisticos);    // pontos_turisticos


  // Área para exibição dos dados da cidade
    printf("Esses sãos os dados da carta\n");
    printf("Estado: %s \n",estado);
    printf("Código: %s \n",codigo);
    printf("Nome da Cidade: %s \n",nome_cidade);
    printf("População: %d \n",populacao);
    printf("Área: %f \n",area);
    printf("PIB: %d \n",pib);
    printf("Pontos Turísticos: %d \n",pontos_turisticos);

return 0;
} 
