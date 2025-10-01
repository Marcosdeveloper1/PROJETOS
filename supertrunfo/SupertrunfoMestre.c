#include <stdio.h>

int main() {
    //Variáveis da Carta 01
    char estado1[50]="A";
    char codigo1[5]= "A01";
    char nome_cidade1[50]= "SÃO PAULO";
    unsigned long int populacao1= 1235000;
    float area1= 1521.11;
    double pib1= 699.280000000;
    int resultadopib;
    int pontos_turisticos1=50;
    float densidade_populacional1;
    float pib_per_capita1;

    //Variáveis da Carta 02
    char estado2[50]="B";
    char codigo2[5]= "B02";
    char nome_cidade2[50]= "RIO DE JANEIRO";
    unsigned long int populacao2= 6748000;
    float area2= 1200.25;
    double pib2= 300.500000000;
    int pontos_turisticos2=30;
    float densidade_populacional2;  
    float pib_per_capita2;

    //Calculo da Carta 01 
    densidade_populacional1 = (float)populacao1 / area1;
   // pib_per_capita = (float)pib / populacao;
    pib_per_capita1 = (pib1 * 1e9) / (float)populacao1; // * 1e9 é o mesmo que 10 a nona = bilhão

    //Calculo da Carta 02 
    densidade_populacional2 = (float)populacao2 / area2;
   // pib_per_capita = (float)pib / populacao;
    pib_per_capita2 = (pib2 * 1e9) / (float)populacao2; // * 1e9 é o mesmo que 10 a nona = bilhão

  //Mensagem de boas vindas
    printf("****Seja bem vindo! Siga os passos abaixo por gentileza**** \n");
    /*
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
    scanf("%f", &pib);    // input do pib
    
    printf("Digite quantos Pontos Turísticos abaixo\n");
    scanf("%d", &pontos_turisticos);    // pontos_turisticos
*/

//comparacao
    resultadopib = pib1 > pib2 ;

  // Área para exibição dos dados da cidade
  // CARTA 01
  /*
    printf("\nDADOS DA CARTA 01\n");
    printf("Estado: %s \n",estado1);
    printf("Código: %s \n",codigo1);
    printf("Nome da Cidade: %s \n",nome_cidade1);
    printf("População: %lu \n",populacao1);
    printf("Área: %.2f km² \n",area1);
    printf("PIB: %.2f bilhões de reais \n",pib1);
    printf("Pontos Turísticos: %d \n",pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km² \n",densidade_populacional1);
    printf("PIB per Capita: %.2f reais \n",pib_per_capita1);
    
    */
    


    // CARTA 02
    /*
    printf("\nDADOS DA CARTA 02\n");
    printf("Estado: %s \n",estado2);
    printf("Código: %s \n",codigo2);
    printf("Nome da Cidade: %s \n",nome_cidade2);
    printf("População: %lu \n",populacao2);
    printf("Área: %.2f km² \n",area2);
    printf("PIB: %.2f bilhões de reais \n",pib2);
    printf("Pontos Turísticos: %d \n",pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n",densidade_populacional2);
    printf("PIB per Capita: %.2f reais \n",pib_per_capita2);   
    */
    //Comparativos
    printf("Comparacao do PIB:(%d)\n", resultadopib);
return 0;
} 
