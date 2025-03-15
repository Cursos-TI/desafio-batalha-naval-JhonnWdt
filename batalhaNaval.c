#include <stdio.h>

// Desafio Batalha Naval - MateCheck
#define LINHA 10
#define COLUNA 10
#define TAM_NAVIO 3

int main() {
    int tabuleiro[LINHA][COLUNA] = {0};
    int i, j, k;

    //navio vertical
    for (k = 0; k < TAM_NAVIO; k++)
    {
        tabuleiro[2 + k][2] = 3;
    }
    //navio horizontal
    for (k = 0; k < TAM_NAVIO; k++)
    {
        tabuleiro[8][5 + k] = 3;
    }
    //navio diagonal
    for (k = 0; k < TAM_NAVIO; k++)
    {
        tabuleiro[1 + k][5 + k] = 3;
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
