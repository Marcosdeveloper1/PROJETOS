#include <stdio.h>

int main() {
    //Variáveis da Carta 01
    char estado1[50];
    char codigo1[5];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    //Variáveis da Carta 02
    char estado2[50];
    char codigo2[5];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    

  //Mensagem de boas vindas
    printf("****Seja bem vindo! Siga os passos abaixo por gentileza**** \n");

 // Entrada de dados - Carta 1
    printf("=== CADASTRO DA CARTA 1 ===\n");
    printf("Digite o estado (sem espaços e acentos): \n");
    scanf("%s",estado1);     // input do estado

    printf("Digite o código:\n");
    scanf("%s",codigo1 );    // input do codigo

    printf("Digite o nome da cidade (sem espaços e acentos):\n");
    scanf("%s",nome_cidade1 );    // input do nome_cidade

    printf("Digite o número da população:\n");
    scanf("%d",&populacao1 );    // input do população

    printf("Digite a área (use ponto como separador decimal):\n");
    scanf("%f",&area1 );    // input do area

    printf("Digite o PIB (com separador decimal, ex.: 699280000000 para 699,28 bilhões):\n");
    scanf("%f", &pib1);    // input do pib

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos1);    // pontos_turisticos

    //Cálculo - Carta 1
    densidade_populacional1= (float) populacao1 / area1;
    //pib_per_capita1= (float) pib1 / populacao1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1;  // *1 bilhão pra total, depois divide// obs: não encontrei outra solucao

    //término da carta 01


    // Entrada de dados - Carta 2
    printf("=== CADASTRO DA CARTA 2 ===\n");
    printf("Digite o estado (sem espaços e acentos): \n");
    scanf("%s",estado2);     // input do estado

    printf("Digite o código:\n");
    scanf("%s",codigo2 );    // input do codigo

    printf("Digite o nome da cidade (sem espaços e acentos):\n");
    scanf("%s",nome_cidade2 );    // input do nome_cidade

    printf("Digite o número da população:\n");
    scanf("%d",&populacao2 );    // input do população

    printf("Digite a área (use ponto como separador decimal):\n");
    scanf("%f",&area2 );    // input do area

    printf("Digite o PIB (com separador decimal, ex.: 699280000000 para 699,28 bilhões):\n");
    scanf("%f", &pib2);    // input do pib

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);    // pontos_turisticos

    //Cálculo - Carta 2
    densidade_populacional2= (float) populacao2 / area2;
    //pib_per_capita2= (float) pib2 / populacao2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;  // *1 bilhão pra total, depois divide// obs: não encontrei outra solucao

    //término da carta 02


  // Área para exibição dos dados da cidade
  // Saída - Carta 1
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %s \n",estado1);
    printf("Código: %s \n",codigo1);
    printf("Nome da Cidade: %s \n",nome_cidade1);
    printf("População: %d \n",populacao1);
    printf("Área: %.2f km² \n",area1);
    printf("PIB: %.2f bilhões de reais \n",pib1);
    printf("Pontos Turísticos: %d \n",pontos_turisticos1);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km² \n",densidade_populacional1);
    printf("PIB PER CAPITA: %.2f reais \n",pib_per_capita1);

    // Saída - Carta 2
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %s \n",estado2);
    printf("Código: %s \n",codigo2);
    printf("Nome da Cidade: %s \n",nome_cidade2);
    printf("População: %d \n",populacao2);
    printf("Área: %.2f \n",area2);
    printf("PIB: %.2f \n",pib2);
    printf("Pontos Turísticos: %d \n",pontos_turisticos2);
    printf("DENSIDADE POPULACIONAL: %.2f \n",densidade_populacional2);
    printf("PIB PER CAPITA: %.2f \n",pib_per_capita2);

return 0;
} 
