#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
 
    //Torre: 5 casas para a direita (usando for)
    // Estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimentação da Torre\n");
    for (int i = 0; i < 5; i++){
        printf("Direita\n");
    }

    //Bispo: 5 casas na Diagonal "Cima, Direita" (usando while)
    //Estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int casasBispo = 5;
    int j = 0;
    printf("\nMovimentação do Bispo\n");
    while (j < casasBispo) {
        printf("Cima, Direita\n");
        j++;
    }

    // Rainha: 8 casas para a esquerda (usando do-while)
    //Estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    int casasRainha = 8;
    int k = 0;
    printf("\nMovimentação da Rainha\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casasRainha);



    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
