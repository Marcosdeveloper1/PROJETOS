#include <stdio.h>


int main(){
  float temperatura, umidade;
  unsigned int estoque, estoqueMinimo = 1000;

  printf("Entre com a temperatura: \n");
  scanf("%f", &temperatura);

  printf("Entre com a umidade: \n");
  scanf("%f", &umidade);

  printf("Entre com o estoque: \n");
  scanf("%u", &estoque);


    if (temperatura > 30){
        printf("A tempertura está alta! \n");
    }
    else{
        printf("A temperatura está dentro dos parâmetros\n");
    }

     if (umidade > 50){
        printf("Umidade elevada\n");
    }
    else{
        printf("Umidade está dentro dos parâmentros\n");
    }

    if(estoque < estoqueMinimo){
        printf("Estoque abaixo do mínimo\n");
    }
    else{
        printf("Estoque normal\n");
    }
}

   

//Programa que verifica as condições de segurança de um armazém

/*
O programa vai verificar 3 coisas
Temperatura
Umidade
Nível de estoque

Se alguma estiver fora do padrão de segurança, uma mensagem de alerta será exibida para o usuário

*/