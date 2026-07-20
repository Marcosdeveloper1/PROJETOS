//programa usando struct e ponteiros
// ler e exibir informações de um estudante
#include <stdio.h>

int main(){
    // criação de variavel de estudante
    
    //tipo de dado definido pelo usuário
    struct estudante {
        int nMatricula;
        char nome[30];
        float vMensalidade;
        char dataBacharelado[30];
    };
    
    
    //declara variável do tipo struct  estudante estudante
    //declara variável do tipo ponteiro de struct
    //estudante

    struct estudante stud1, *ptr_stud1;

    //leitura de dados do usuario
    ptr_stud1=&stud1;


    printf("\n Digite matricula: \n");
    scanf("%d", &ptr_stud1->nMatricula);
    
    printf("\n Digite o nome: \n");
    scanf("%s", &ptr_stud1->nome);
    
    printf("\n Digite a mensalidade: \n");
    scanf("%f", &ptr_stud1->vMensalidade);
    
    printf("\n Digite a data do Bacharelado: \n");
    scanf("%s", &ptr_stud1->dataBacharelado);

    
    //exibir dados coletados
    
    printf("\n ****** CADASTRO DO ESTUDANTE ******\n");
    printf("\n No. Matricula: %d \n", ptr_stud1->nMatricula);
    printf("\n Nome: %s \n", ptr_stud1->nome);
    printf("\n Mensalidade: %9.2f \n", ptr_stud1->vMensalidade);
    printf("\n Data do Bacharelado: %s \n", ptr_stud1->dataBacharelado);
    
    return 0;
    
}