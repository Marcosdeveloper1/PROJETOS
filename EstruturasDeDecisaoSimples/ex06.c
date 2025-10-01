#include <stdio.h>

int main(){
    int nota;
    int media = 65;

    printf("Digite sua nota\n");
    scanf("%d", &nota);

    if (nota >= media){
        printf("Vc está aprovado!\n");

        }
    else{
        printf("Vc está reprovado\n");
    }


}