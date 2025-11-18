#include <stdio.h>


int main(){
    int opcao, regras;

    printf("Menu Princiapl\n");
    printf("1.Iniciar Jogo\n");
    printf("2.Ajuda\n");
    printf("3.Sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Iniciando game!\n");
        break;
    
    case 2:
        printf("Ajuda:\n");
        printf("1. Como Jogar\n");
        printf("2. Regras\n");
        printf("3. Sair\n");
         scanf("%d", &regras);
            switch (regras){
                case 1:
                    printf("Para jogar vc precisa...");
                    break;
            }
        break;
    
    case 3:
        printf("Iniciando game!\n");
        break;
    
    default:
        break;
    }

}



