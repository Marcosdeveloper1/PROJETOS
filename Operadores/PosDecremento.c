#include <stdio.h>

int main() {
    int a = 5;
    int b = a--; // b recebe 5, depois a vira 4

    printf("a = %d\n", a); // 4
    printf("b = %d\n", b); // 5
    return 0;
}
