//Criar um programa que gerencie um duelo entre um herói e um monstro
#include <stdio.h>
#include <string.h>

struct Personagem{
//Passo 1: Crie uma struct Personagem com: nome (string), vida (int) e ataque (int).
    
    char nome[30];
    int vida;
    int ataque;
};
//Passo 3: Crie uma função chamada causarDano que receba o ponteiro do alvo e o valor do ataque do atacante. Essa função deve subtrair a vida do alvo.
void causarDano(struct Personagem *alvo, int danoAtacante){

    alvo->vida = alvo->vida - danoAtacante;
}

//Passo 2: Na função main, inicialize um Herói e um Monstro com valores de sua escolha.

int main(){
    
struct Personagem heroi;
strcpy(heroi.nome, "Levi");
heroi.vida = 50;
heroi.ataque = 30;

struct Personagem monstro;
strcpy(monstro.nome, "Copatrupa");
monstro.vida = 80;
monstro.ataque =10;

//Passo 4: Simule um turno de ataque (o Herói ataca o Monstro) e exiba o status atualizado do Monstro na tela usando os prints corretos.
    
// Printando valores iniciais (o que você já fez)
    printf("\n****** DADOS INICIAIS ******\n");
    printf("Nome: %s | Vida: %d | Ataque: %d\n", heroi.nome, heroi.vida, heroi.ataque);
    printf("Nome: %s | Vida: %d | Ataque: %d\n", monstro.nome, monstro.vida, monstro.ataque);

    // =======================================================
    // PASSO 4: SIMULANDO O TURNO DE ATAQUE
    // =======================================================
    // O Levi vai atacar o Copatrupa. 
    // Passamos o endereço do monstro (&monstro) e o valor do ataque do herói (heroi.ataque)
    causarDano(&monstro, heroi.ataque);

    // Exibindo o status atualizado do Monstro após o ataque
    printf("\n****** O HERÓI %s ATACOU O MONSTRO %s! ******\n", heroi.nome, monstro.nome);
    printf("Nova vida do %s: %d\n", monstro.nome, monstro.vida);
    
    return 0;
}
