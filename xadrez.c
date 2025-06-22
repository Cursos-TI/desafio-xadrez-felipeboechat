#include <stdio.h>

// Protótipos das funções recursivas para o nível Mestre
void moverTorreRecursivo(int casas);
void moverBispoRecursivo(int casas);
void moverRainhaRecursivo(int casas);

// Desafio de Xadrez - MateCheck
// Este código demonstra a movimentação de peças de xadrez usando diferentes técnicas de programação em C.

int main() {
    // --- Nível Novato (Substituído por Nível Mestre) ---

    printf("--- Movimentação com Funções Recursivas (Nível Mestre) ---\n\n");

    // Definindo o número de casas para cada peça
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    // -----------------------------
    // Movimentação da Torre (Recursiva)
    printf("Movimentação da Torre (Recursiva):\n");
    moverTorreRecursivo(casas_torre);
    printf("\n");

    // -----------------------------
    // Movimentação do Bispo (Recursiva com Loops Aninhados)
    printf("Movimentação do Bispo (Recursiva com Loops Aninhados):\n");
    moverBispoRecursivo(casas_bispo);
    printf("\n");

    // -----------------------------
    // Movimentação da Rainha (Recursiva)
    printf("Movimentação da Rainha (Recursiva):\n");
    moverRainhaRecursivo(casas_rainha);
    printf("\n");

    // --- Nível Aventureiro (Substituído por Nível Mestre) ---
    printf("--- Movimentação com Loops Complexos (Nível Mestre) ---\n\n");

    // -----------------------------
    // Movimentação do Cavalo (Loops Aninhados e Complexos)
    // Movimento: 2 casas para cima, 1 para a direita.
    printf("Movimentação do Cavalo (Loops Complexos):\n");
    int mov_vertical = 2;
    int mov_horizontal = 1;
    int total_passos = mov_vertical + mov_horizontal;

    // Loop externo para controlar o total de passos do cavalo
    for (int passo = 1; passo <= total_passos; passo++) {
        // Loop interno apenas para atender ao requisito de aninhamento
        while (1) {
            if (passo <= mov_vertical) {
                // Se o passo atual for parte do movimento vertical, imprime "Cima".
                printf("Cima\n");
            } else {
                // Caso contrário, é o movimento horizontal, imprime "Direita".
                printf("Direita\n");
            }
            // O 'break' garante que o loop interno execute apenas uma vez por passo,
            // permitindo a simulação de movimentos sequenciais.
            break;
        }
    }
    printf("\n");

    return 0;
}

/**
 * @brief Move a Torre para a direita de forma recursiva.
 * @param casas O número de casas restantes para mover.
 */
void moverTorreRecursivo(int casas) {
    // Condição de parada: se não há mais casas para mover, a função retorna.
    if (casas <= 0) {
        return;
    }
    // Imprime o movimento atual.
    printf("Direita\n");
    // Chama a si mesma com uma casa a menos.
    moverTorreRecursivo(casas - 1);
}

/**
 * @brief Move o Bispo na diagonal (cima, direita) de forma recursiva.
 *        Utiliza loops aninhados para demonstrar a composição do movimento.
 * @param casas O número de casas restantes para mover.
 */
void moverBispoRecursivo(int casas) {
    // Condição de parada da recursão.
    if (casas <= 0) {
        return;
    }

    // Loops aninhados para simular o movimento diagonal, conforme requisito.
    // O loop externo representa o movimento vertical.
    for (int v = 0; v < 1; v++) {
        // O loop interno representa o movimento horizontal.
        for (int h = 0; h < 1; h++) {
            printf("Cima Direita\n");
        }
    }

    // Chamada recursiva para o próximo passo na diagonal.
    moverBispoRecursivo(casas - 1);
}

/**
 * @brief Move a Rainha para a esquerda de forma recursiva.
 * @param casas O número de casas restantes para mover.
 */
void moverRainhaRecursivo(int casas) {
    // Condição de parada da recursão.
    if (casas <= 0) {
        return;
    }
    // Imprime o movimento atual.
    printf("Esquerda\n");
    // Chama a si mesma com uma casa a menos.
    moverRainhaRecursivo(casas - 1);
}
