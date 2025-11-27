#include<stdio.h>

int main(){
    unsigned long int populacao1= 12325000;
    unsigned long int populacao2= 6748000;
    int temperatura = 28;
    int resultado, resultado2;

    resultado2 = populacao1 > populacao2 ? 1: 0; //1 para verdadeiro e 0 para falso
    if(resultado2 == 1)
    {
        printf("O valor é esse: %d!\n", resultado2);
    }else{
        printf("O valor é esse: %d!\n", populacao2);
    }
    return 0;

}
/*
  //Variáveis da Carta 01
    char estado1[50] = "A";
    char codigo1[5] = "A01";
    char nome_cidade1[50] = "SAO PAULO";
    unsigned long int populacao1= 12325000; // 12325000
    float area1 = 1521.11; // 1521.11
    double pib1 = 699.280000000; // 699.280000000
    int painel, pontos_turisticos1 = 50; //50
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

*/