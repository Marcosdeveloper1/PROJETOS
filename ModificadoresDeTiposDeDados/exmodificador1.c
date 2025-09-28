#include <stdio.h>

int main(){
    int populacao1;
    double area1;
    double pib1;
    double densidade_populacional1;
    double pib_per_capita1;

    printf("Digite a populacao\n");
    scanf("%d", &populacao1);

    printf("Digite a area\n");
    scanf("%f", &area1);

    printf("Digite o pib\n");
    scanf("%f", &pib1);

    densidade_populacional1 = (float)populacao1 / area1;

    //saidas
    printf("Populacao:%d\n", populacao1);
    printf("Populacao:%.2f\n", area1);
    printf("Populacao:%.2f\n", pib1);
    printf("Populacao:%.2f\n", densidade_populacional1);
    printf("Populacao:%.2f\n", pib_per_capita1);




}