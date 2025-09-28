#include <stdio.h>
int main(){

    int num;
    printf("Entre com um inteiro:\n");
    scanf("%d", &num);

    num = num + num%3;
    printf("num = %d \n", num);
}
/*

Você digita 5, e num = 5.
A linha num = num + num % 3:
Primeiro, calcula num % 3:
Isso não é uma divisão real (como 5 ÷ 3 = 1.666...), mas uma divisão inteira (truncada).
Em divisão inteira: 5 ÷ 3 = 1 (só a parte inteira, ignora as casas decimais).
O resto (o que "sobra") é calculado como: 5 - (3 × 1) = 5 - 3 = 2.
Então, num % 3 = 2.
Depois, soma: 5 + 2 = 7.
Atribui de volta: num = 7.
Saída: "num = 7".

*/