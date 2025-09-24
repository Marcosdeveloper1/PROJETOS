#include <stdio.h>

int main() {
    int a = 5;
    int b = ++a; // Primeiro soma 1 (a vira 6), depois atribui a b

    printf("a = %d\n", a); // 6
    printf("b = %d\n", b); // 6
    return 0;
}
/*

| Operação | O que faz          | Valor mostrado | Valor final |
| -------- | ------------------ | -------------- | ----------- |
| `++a`    | Soma **antes**     | Novo valor     | Novo valor  |
| `a++`    | Soma **depois**    | Valor antigo   | Novo valor  |
| `--a`    | Subtrai **antes**  | Novo valor     | Novo valor  |
| `a--`    | Subtrai **depois** | Valor antigo   | Novo valor  |
*/