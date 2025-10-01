#include <stdio.h>

int main(){
    int numero = 15, resultado;
    resultado = numero % 2; //  Ele retorna o resto de uma divisão entre dois números inteiros, por exemplo a % b. Quando você divide a por b, o operador % retorna o resto dessa divisão. Pelo o que vi só retorna 0 ou 1, sendo verdadeiro(número par) ou falso(número ímpar) respectivamente


    printf("A variável resultado é: %d\n", resultado);
    if (resultado == 0)
        printf("O número é par\n");


}