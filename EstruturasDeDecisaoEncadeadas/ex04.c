#include <stdio.h>

int main(){

    //Exibição de conceito de notas do bimestre nem matematica


    /*
    ---- Conceitos ----
    A >= 90
    B >= 80
    C >= 70
    D >= 60
    E >= 50
    F - aqui seria abaixo de 50
    */
    float nota, atividade1,atividade2, atividade3, atividade4;  

    //Entrada de dados
    printf("Digite a nota da Atividade 1\n");
    scanf("%f", &atividade1);

    printf("Digite a nota da Atividade 2\n");
    scanf("%f", &atividade2);

    printf("Digite a nota da Atividade 3\n");
    scanf("%f", &atividade3);

    printf("Digite a nota da Atividade 4\n");
    scanf("%f", &atividade4);
    

    //Calculo da nota
    nota = atividade1 + atividade2 + atividade3 + atividade4;

    //Exibição dos dados
    if (nota >= 10){ // Grau A
        printf("Conceito 'A' com o valor de %.2f\n", nota);
    }else if(nota >= 8){ // Grau B 
        printf("Conceito 'B' com o valor de %.2f\n", nota);
    }else if(nota >= 7){ // Grau C
        printf("Conceito 'C' com o valor de %.2f\n", nota);
    }else if(nota >= 6){ // Grau D
        printf("Conceito 'D' com o valor de %.2f\n", nota);
    }else if(nota >= 5){ // Grau E
        printf("Conceito 'E' com o valor de %.2f\n", nota);
    }else {
        printf("Conceito 'F' com o valor de %.2f. Portanto reprovado\n", nota);
    }
    
    /*
    Uma curiosidade é q quando usamos
    if (funcao)
        printf()
    else if

    Fazemos uma outra verificação dentro do if 
    */
    /*
    printf("Nota de matemática: %.2f \n", matematica);
    printf("Nota de matemática: %.2f \n", portugues);
    printf("Nota de matemática: %.2f \n", geografia);
    printf("Nota de matemática: %.2f \n", historia);
    */
 }