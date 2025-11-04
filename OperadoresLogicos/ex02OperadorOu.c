#include <stdio.h>

//|| > Sinal "Ou" Positivo para pelo menos 1 valor positivo.

int main(){
    int a = -10, b = -5;
    if (a>0 || b>0)
    {
    printf("Pelo menos um dos numeros é positivo\n");

    }
    else{
        printf("Os dois numeros são negativos\n");
    }

}