#include <stdio.h>

int main() {
    //Variáveis da Carta 01
    char estado1[50];
    char codigo1[5];
    char nome_cidade1[50];
    unsigned long int populacao1; // 1235000
    float area1; // 1521.11
    double pib1; // 699.280000000
    int pontos_turisticos1; //50
    float densidade_populacional1;
    float pib_per_capita1;
    float Superpoder1;

    //Variáveis da Carta 02
    char estado2[50];
    char codigo2[5];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area2;
    double pib2;
    int pontos_turisticos2;
    float densidade_populacional2;  
    float pib_per_capita2;
    float Superpoder2;

    

    

  //Mensagem de boas vindas
    printf("\n---- Seja bem vindo! Siga os passos abaixo por gentileza ---- \n");

  // Área para entrada de dados da Carta 01
    printf("Digite o estado\n");
    scanf("%s",estado1);     // input do estado

    printf("Digite o código\n");
    scanf("%s",codigo1 );    // input do codigo

    printf("Digite o nome da cidade\n");
    scanf("%s",nome_cidade1 );    // input do nome_cidade

    printf("Digite o numero da população\n");
    scanf("%lu",&populacao1 );    // input do população

    printf("Digite o número da área\n");
    scanf("%f",&area1 );    // input do area

    printf("Digite o número do PIB(Em bilhões. ex: 100.000.000.000 = 100 bilhões)\n");
    scanf("%lf", &pib1);    // input do pib
    
    printf("Digite quantos Pontos Turísticos\n");
    scanf("%d", &pontos_turisticos1);    // pontos_turisticos

    //Calculo da Carta 01 
    densidade_populacional1 = (float)populacao1 / area1;
   // pib_per_capita = (float)pib / populacao;
    pib_per_capita1 = (pib1 * 1e9) / (float)populacao1; // * 1e9 é o mesmo que 10 a nona = bilhão

    //Superpoder 1
    Superpoder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade_populacional1);

    // Área para entrada de dados da Carta 02
    printf("\nCARTA 02\n");
    printf("Digite o estado\n");
    scanf("%s",estado2);     // input do estado

    printf("Digite o código\n");
    scanf("%s",codigo2 );    // input do codigo

    printf("Digite o nome da cidade\n");
    scanf("%s",nome_cidade2 );    // input do nome_cidade

    printf("Digite o numero da população\n");
    scanf("%lu",&populacao2 );    // input do população

    printf("Digite o número da área\n");
    scanf("%f",&area2 );    // input do area

    printf("Digite o número do PIB(Em bilhões. ex: 100.000.000.000 = 100 bilhões)\n");
    scanf("%lf", &pib2);    // input do pib
    
    printf("Digite quantos Pontos Turísticos\n");
    scanf("%d", &pontos_turisticos2);    // pontos_turisticos

    //Calculo da Carta 02 
    densidade_populacional2 = (float)populacao2 / area2;
   // pib_per_capita = (float)pib / populacao;
    pib_per_capita2 = (pib2 * 1e9) / (float)populacao2; // * 1e9 é o mesmo que 10 a nona = bilhão

    //Superpoder 2
    Superpoder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);


  // Área para exibição dos dados da cidade
  // CARTA 01

    printf("\nDADOS DA CARTA 01\n");
    printf("Estado: %s \n",estado1);
    printf("Código: %s \n",codigo1);
    printf("Nome da Cidade: %s \n",nome_cidade1);
    printf("População: %lu \n",populacao1);
    printf("Área: %.2f km² \n",area1);
    printf("PIB: %.2lf bilhões de reais \n",pib1);
    printf("Pontos Turísticos: %d \n",pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km² \n",densidade_populacional1);
    printf("PIB per Capita: %.2f reais \n",pib_per_capita1);
    
  
    


    // CARTA 02
  
    printf("\nDADOS DA CARTA 02\n");
    printf("Estado: %s \n",estado2);
    printf("Código: %s \n",codigo2);
    printf("Nome da Cidade: %s \n",nome_cidade2);
    printf("População: %lu \n",populacao2);
    printf("Área: %.2f km² \n",area2);
    printf("PIB: %.2lf bilhões de reais \n",pib2);
    printf("Pontos Turísticos: %d \n",pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n",densidade_populacional2);
    printf("PIB per Capita: %.2f reais \n",pib_per_capita2);   
  

    //Comparativos
    printf("\n--- COMPARATIVOS ---\n");
    printf("População: Carta %d venceu (%d)\n",
          (populacao1 > populacao2) * 1 + (populacao1 <= populacao2) * 2, populacao1 > populacao2);

    printf("Área: Carta %d venceu (%d)\n",
          (area1 > area2) * 1 + (area1 <= area2) * 2, area1 > area2);

    printf("PIB: Carta %d venceu (%d)\n",
          (pib1 > pib2) * 1 + (pib1 <= pib2) * 2, pib1 > pib2);

    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
          (pontos_turisticos1 > pontos_turisticos2) * 1 + (pontos_turisticos1 <= pontos_turisticos2) * 2, pontos_turisticos1 > pontos_turisticos2);
    
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
       (densidade_populacional1 < densidade_populacional2) ? 1 : 2,
       (densidade_populacional1 < densidade_populacional2) ? 1 : 0);

     printf("PIB per Capita: Carta %d venceu (%d)\n",
          (pib_per_capita1 > pib_per_capita2) ? 1 : 2,
          (pib_per_capita1 > pib_per_capita2) ? 1 : 0);

     printf("Super Poder: Carta %d venceu (%d)\n",
          (Superpoder1 > Superpoder2) * 1 + (Superpoder1 <= Superpoder2) * 2, Superpoder1 > Superpoder2);
      
return 0;
}