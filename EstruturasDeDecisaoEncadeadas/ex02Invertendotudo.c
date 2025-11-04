#include <stdio.h>

int main(){

    int idade;
    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    if (idade >= 60){
        printf("Você é um Idoso !\n");
    }else if(idade < 60 && idade >= 18){
        printf("Você é um adulto!\n");
    }else if(idade >= 12 && idade < 18){
        printf("Você é um adolescente\n");
    }
    else{
        printf("Você é uma Criança\n");
    }

}

//Criança < 12
//Adolescente 12 <= x < 18
//Adulto 18 <= x < 60
//Idoso > 60

//idoso, adulto, adolescente, criança
