#include <stdio.h>

int main() {
    int a = 5;

    printf("Valor inicial de a: %d\n", a);

    printf("\n--- Pré-incremento ---\n");
    printf("Usando ++a em printf: %d\n", ++a); // soma 1 antes de mostrar
    printf("Valor de a depois do printf: %d\n", a);

    printf("\n--- Pós-incremento ---\n");
    printf("Usando a++ em printf: %d\n", a++); // mostra antes, soma depois
    printf("Valor de a depois do printf: %d\n", a);

    printf("\n--- Pré-decremento ---\n");
    printf("Usando --a em printf: %d\n", --a); // diminui 1 antes de mostrar
    printf("Valor de a depois do printf: %d\n", a);

    printf("\n--- Pós-decremento ---\n");
    printf("Usando a-- em printf: %d\n", a--); // mostra antes, diminui depois
    printf("Valor de a depois do printf: %d\n", a);

    return 0;
}
