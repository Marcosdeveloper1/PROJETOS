#include <stdio.h>

int main() {
    int a = 5;
    int b = a++; // Primeiro atribui a b (b recebe 5), depois soma 1 em a

    printf("a = %d\n", a); // 6 (foi incrementado depois)
    printf("b = %d\n", b); // 5 (recebeu o valor antes do incremento)
    return 0;
}
