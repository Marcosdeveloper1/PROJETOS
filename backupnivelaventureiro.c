#include <stdio.h>

int main() {
    char estado[50]="A";
    char codigo[5]= "A01";
    char nome_cidade[50]= "SAO PAULO";
    unsigned long int populacao= 1235000;
    float area= 1521.11;
    double pib= 699.280000000;
    int pontos_turisticos=50;

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

  // Área para exibição dos dados da cidade
    printf("Esses sãos os dados da carta\n");
    printf("Estado: %s \n",estado);
    printf("Código: %s \n",codigo);
    printf("Nome da Cidade: %s \n",nome_cidade);
    printf("População: %u \n",populacao);
    printf("Área: %.2f \n",area);
    printf("PIB: %.2f \n",pib);
    printf("Pontos Turísticos: %d \n",pontos_turisticos);

return 0;
} 
