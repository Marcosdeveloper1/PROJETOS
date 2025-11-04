#include <stdio.h>

int main() {
    //Variáveis da Carta 01
    char estado1[50] = "A";
    char codigo1[5] = "A01";
    char nome_cidade1[50] = "SAO PAULO";
    unsigned long int populacao1= 12325000; // 1235000
    float area1 = 1521.11; // 1521.11
    double pib1 = 699.280000000; // 699.280000000
    int pontos_turisticos1 = 50; //50
    float densidade_populacional1;
    float pib_per_capita1;
    float Superpoder1;

    //Variáveis da Carta 02
    char estado2[50]="B";
    char codigo2[5]= "B02";
    char nome_cidade2[50]= "RIO DE JANEIRO";
    unsigned long int populacao2= 6748000;
    float area2 = 1200.25;  
    double pib2 = 300.500000000;
    int pontos_turisticos2 = 30;
    float densidade_populacional2;  
    float pib_per_capita2;
    float Superpoder2;

    

    

  //Mensagem de boas vindas
    printf("\n---- Seja bem vindo! Siga os passos abaixo por gentileza ---- \n");

/*
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
*/
    //Calculo da Carta 01 
    densidade_populacional1 = (float)populacao1 / area1;
   // pib_per_capita = (float)pib / populacao;
    pib_per_capita1 = (pib1 * 1e9) / (float)populacao1; // * 1e9 é o mesmo que 10 a nona = bilhão

    //Superpoder 1
    Superpoder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade_populacional1);

    // Área para entrada de dados da Carta 02
    /*
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
*/
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
    //Comparacao de populacao
    if(populacao1 > populacao2 ){
      printf("A Carta 01 veceu com a População de: %lu \n",populacao1);
      }
    else{
      printf("A Carta 02 veceu com a População de: %lu \n",populacao2);
    }
//Comparacao de Area
    if(area1 > area2 ){
      printf("A Carta 01 venceu com a Área de: %.2f km² \n",area1);
      }
    else{
      printf("A Carta 02 venceu com a Área de: %.2f km² \n",area2);
      }
      
      //Comparacao do PIB
      if(pib1 > pib2 ){
      printf("A Carta 01 venceu com o PIB de: %.2lf bilhões de reais \n",pib1);
      }
    else{
      printf("A Carta 02 venceu com o PIB de: %.2lf bilhões de reais \n",pib2);
      }
      
      //Comparacao dos Pontos turisticos
      if(pontos_turisticos1 > pontos_turisticos2 ){
      printf("A Carta 01 venceu com os Pontos Turísticos de: %d \n",pontos_turisticos1);
      }
    else{
      printf("A Carta 02 venceu com os Pontos Turísticos de: %d \n",pontos_turisticos2);
      }
      
      //Comparacao da Densidade Populacional
      if(densidade_populacional1 < densidade_populacional2 ){
      printf("A Carta 01 venceu com a Densidade Populacional de: %.2f hab/km² \n",densidade_populacional1);
      }
    else{
      printf("A Carta 02 venceu com a Densidade Populacional de: %.2f hab/km². *Vence o menor valor \n",densidade_populacional2);
      }
      
      //Comparacao da Densidade Populacional
      if(pib_per_capita1 > pib_per_capita2 ){
      printf("A Carta 01 venceu com o PIB per Capita de: %.2f reais \n",pib_per_capita1);
      }
    else{
      printf("A Carta 02 venceu com o PIB per Capita de: %.2f reais \n",pib_per_capita2);
      }
  
  return 0;
}