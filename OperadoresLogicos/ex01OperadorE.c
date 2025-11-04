#include <stdio.h>

//&& > Sinal "E" Só dá positivo se os dois valores a serem verificados forem positivos.

int main(){
    int a = 10, b = 5;
    if (a>0 && b>0)
    {
    printf("Os dois numeros são positivos\n");

    }
    else{
        printf("Pelo menos um dos numeros é negativo\n");
    }

}