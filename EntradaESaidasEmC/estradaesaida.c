#include <stdio.h>
 
int main() {
    int idade = 25;
    float altura = 1.75;
    double saldoBancario = 12345.67;
    char inicial = 'A';
    char nome[20] = "Bruno";

    /*para printar uma variável é preciso primeiramente colocar a identificação das variáveis. Após isso colocamos o nome da variável.
    printf("%+identificação da variável", variavel);
    */
    printf("Idade: %d anos\n", idade); // "\n" é um indicador para a quebra de linhas
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario); // o numero antes da identificação f indica quantas casas decimais terá
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);
 
    return 0;
}
/*  
    IDENTIFICAÇÕES DAS VARIÁVEIS
%d: Imprime um inteiro no formato decimal
%i: Equivalente a %d
%f: Imprime um número de ponto flutuante no formato padrão
%e: Imprime um número de ponto flutuante na notação científica
%c: Imprime um único caractere
%s: Imprime uma cadeia (string) de caracteres


*/