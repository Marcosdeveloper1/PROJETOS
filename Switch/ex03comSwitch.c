#include <stdio.h>

int main(){
    int dia;

    printf("Entre o valor do dia!\n");
    scanf("%d", &dia);

   switch (dia){
        case 1:
            printf("Domingo\n"); 
            break;
        case 2:
            printf("Segunda");
            break;
        case 3:
            printf("Terça");
            break;
        case 4:
            printf("Quarta");
            break;

        case 5:
            printf("Quinta");
            break;

        case 6:
            printf("Sexta");
            break;

        case 7:
            printf("Sábado");
            break;
        default:
            printf("Opção inválida!");
            break;     
               }
}

/*

if (idade < 12){
        printf("Você é uma criança!\n");
    }else if(idade >= 12 && idade < 18){
        printf("Você é um adolescente!\n");
    }else if(idade >= 18 && idade < 60){
        printf("Você é um adulto\n");
    }
    else{
        printf("Você é um idoso\n");
    }


*/



