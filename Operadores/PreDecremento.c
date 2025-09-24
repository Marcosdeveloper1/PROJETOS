#include <stdio.h>

int main() {
    int a = 5;
    int b = --a; // a vira 4 antes de ser usado

    printf("a = %d\n", a); // 4
    printf("b = %d\n", b); // 4
    return 0;
}
