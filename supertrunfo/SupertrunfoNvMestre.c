#include <stdio.h>

int main() {
    // Variáveis da Carta 01
    char estado1[50];
    char codigo1[5];
    char nome_cidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade_populacional1, pib_per_capita1, super_poder1;
    int pontos_turisticos1;

    // Variáveis da Carta 02
    char estado2[50];
    char codigo2[5];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade_populacional2, pib_per_capita2, super_poder2;
    int pontos_turisticos2;

    // Mensagem de boas-vindas
    printf("**** Seja bem-vindo! Siga os passos abaixo ****\n");

    // Entrada de dados - Carta 1
    printf("=== CADASTRO DA CARTA 1 ===\n");
    printf("Digite o estado:\n");
    scanf(" %[^\n]", estado1); // aceita espaço
    printf("Digite o código:\n");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nome_cidade1); // aceita espaço
    printf("Digite a população:\n");
    scanf("%lu", &populacao1);
    printf("Digite a área:\n");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos1);

    // Cálculo - Carta 1
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0f) +
                   pontos_turisticos1 + pib_per_capita1 +
                   (1.0f / densidade_populacional1);

    // Entrada de dados - Carta 2
    printf("=== CADASTRO DA CARTA 2 ===\n");
    printf("Digite o estado:\n");
    scanf(" %[^\n]", estado2);
    printf("Digite o código:\n");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nome_cidade2);
    printf("Digite a população:\n");
    scanf("%lu", &populacao2);
    printf("Digite a área:\n");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    // Cálculo - Carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0f) +
                   pontos_turisticos2 + pib_per_capita2 +
                   (1.0f / densidade_populacional2);

    // Exibição de resultados
    printf("\n=== RESULTADOS ===\n");

    // População
    printf("População: Carta %d venceu (%d)\n",
           (populacao1 > populacao2) * 1 + (populacao1 <= populacao2) * 2,
           populacao1 > populacao2);

    // Área
    printf("Área: Carta %d venceu (%d)\n",
           (area1 > area2) * 1 + (area1 <= area2) * 2,
           area1 > area2);

    // PIB
    printf("PIB: Carta %d venceu (%d)\n",
           (pib1 > pib2) * 1 + (pib1 <= pib2) * 2,
           pib1 > pib2);

    // Pontos turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
           (pontos_turisticos1 > pontos_turisticos2) * 1 + (pontos_turisticos1 <= pontos_turisticos2) * 2,
           pontos_turisticos1 > pontos_turisticos2);

    // Densidade populacional (MENOR vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (densidade_populacional1 < densidade_populacional2) * 1 + (densidade_populacional1 >= densidade_populacional2) * 2,
           densidade_populacional1 < densidade_populacional2);

    // PIB per capita
    printf("PIB per Capita: Carta %d venceu (%d)\n",
           (pib_per_capita1 > pib_per_capita2) * 1 + (pib_per_capita1 <= pib_per_capita2) * 2,
           pib_per_capita1 > pib_per_capita2);

    // Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n",
           (super_poder1 > super_poder2) * 1 + (super_poder1 <= super_poder2) * 2,
           super_poder1 > super_poder2);

    return 0;
}
