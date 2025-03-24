#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
   
#define bispo_mov 5
    #define torre_mov 5
    #define rainha_mov 8
int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
  
    printf("Desafio Xadrez:\n"); 

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
   
    printf("Movimentação do Bispo:\n");

    for (int i = 0; i < bispo_mov; i++)
    {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    printf("Movimentação do Torre:\n");

    for (int i = 0; i < torre_mov; i++)
    {
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
    printf("Movimentação da Rainha:\n");

    for (int i = 0; i < rainha_mov; i++)
    {
        printf("Esquerda\n");
    }
    printf("\n");
    
    return 0;
}
