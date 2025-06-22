#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Definindo o número de casas para cada peça
    int casas_torre = 5;      // Torre move 5 casas para a direita
    int casas_bispo = 5;      // Bispo move 5 casas na diagonal (cima e direita)
    int casas_rainha = 8;     // Rainha move 8 casas para a esquerda

    // -----------------------------
    // Movimentação da Torre (for)
    // A torre move-se em linha reta, horizontal ou vertical. Aqui, simulamos 5 casas para a direita.
    printf("Movimentação da Torre:\n");
    for (int i = 1; i <= casas_torre; i++) {
        // Para cada casa, imprime a direção do movimento
        printf("Direita\n");
    }
    printf("\n");

    // -----------------------------
    // Movimentação do Bispo (while)
    // O bispo move-se em diagonal. Aqui, simulamos 5 casas na diagonal para cima e à direita.
    printf("Movimentação do Bispo:\n");
    int i = 1;
    while (i <= casas_bispo) {
        // Para cada casa, imprime a combinação de direções
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // -----------------------------
    // Movimentação da Rainha (do-while)
    // A rainha move-se em todas as direções. Aqui, simulamos 8 casas para a esquerda.
    printf("Movimentação da Rainha:\n");
    int j = 1;
    do {
        // Para cada casa, imprime a direção do movimento
        printf("Esquerda\n");
        j++;
    } while (j <= casas_rainha);
    printf("\n");

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
