#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-incremento ++a // esse "a" é a variável
    Pós-incremento a++
    Decremento (--)
    Pré-decremento --a
    Pós-decremento a--
    */


    //incremento
    int numero1 = 1, resultado;

    printf("Antes incremento: %d\n", numero1);
    //numero1 = numero1 +1;
    //numero1 += 1;
    //Pos incremento:
    //resultado = numero1;
    //numero++;

   // numero1++;
    resultado = numero1++;
    //printf("Após o incremento: %d\n", numero1);
    printf("Após o Pós-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    //decremento
    //numero1 -= 1;
    //numero1--;
    //printf("Após o decremento: %d\n", numero1);
    
}