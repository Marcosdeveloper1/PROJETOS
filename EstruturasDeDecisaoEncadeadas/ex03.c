#include <stdio.h>

int main(){

    //Exibição de conceito de notas do bimestre
    //Matematica, Portugues, geografia, historia

    /*
    ---- Conceitos ----
    A >= 90
    B >= 80
    C >= 70
    D >= 60
    E >= 50
    F - aqui seria abaixo de 50
    */
    float nota, matematica, portugues, geografia, historia; 

    //Entrada de dados
    printf("Digite a nota de matematica\n");
    scanf("%f", &matematica);

    printf("Digite a nota de português\n");
    scanf("%f", &portugues);

    printf("Digite a nota de geografia\n");
    scanf("%f", &geografia);

    printf("Digite a nota de história\n");
    scanf("%f", &historia);
    

    //Calculo da nota
    nota = matematica + portugues + geografia + historia;

    //Exibição dos dados
    if (nota >= 90){ // Grau A
        printf("Conceito 'A' com o valor de %.2f\n", nota);
    }else if(nota >= 80){ // Grau B
        printf("Conceito 'B' com o valor de %.2f\n", nota);
    }else if(nota >= 70){ // Grau C
        printf("Conceito 'C' com o valor de %.2f\n", nota);
    }else if(nota >= 60){ // Grau D
        printf("Conceito 'D' com o valor de %.2f\n", nota);
    }else if(nota >= 50){ // Grau E
        printf("Conceito 'E' com o valor de %.2f\n", nota);
    }else {
        printf("Conceito 'F' com o valor de %.2f. Portanto reprovado\n", nota);
    }

    /*
    printf("Nota de matemática: %.2f \n", matematica);
    printf("Nota de matemática: %.2f \n", portugues);
    printf("Nota de matemática: %.2f \n", geografia);
    printf("Nota de matemática: %.2f \n", historia);
    */
 }