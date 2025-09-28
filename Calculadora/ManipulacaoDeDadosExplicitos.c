#include <stdio.h>

int main(){
    int a = 10;
    float b = 3;
    float quoeciente = (float ) a / b; // "a" é convertido explicitamente para float

    printf("Resultado: %.2f\n", quoeciente);

    return 0;
}