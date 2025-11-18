#include <stdio.h>

int main(){
    int dia = 3;

    printf("Entre o valor do dia!\n");
    scanf("%d", &dia);

    if (dia == 1){
            printf("Domingo\n"); 
        }else if(dia == 2){
            printf("Segunda");
        }else if (dia == 3){
            printf("Terça");
        }else if (dia == 4){
            printf("Quarta");
        }else if (dia == 5){
            printf("Quinta");
        }else if (dia == 6){
            printf("Sexta");
        }else{
            printf("Sábado");
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



