#include <stdio.h>

int main() {
    // Declaração de variáveis
    int N, P, M, pequeno = 0, medio = 0, T;

    // Solicita e lê o número de premiados com validação
    do {
        printf("Digite o número de premiados (deve ser maior ou igual a 1):\n");
        scanf("%d", &N);
        if (N < 1) {
            printf("Número inválido. Por favor, digite um número maior ou igual a 1.\n");
        }
    } while (N < 1);

    // Solicita e lê os tamanhos solicitados
    for (int i = 0; i < N; i++) {
        do {
            printf("Digite o tamanho solicitado pelo premiado %d (1 para pequeno, 2 para médio):\n", i + 1);
            scanf("%d", &T);
            if (T != 1 && T != 2) {
                printf("Tamanho inválido. Digite 1 para pequeno ou 2 para médio.\n");
            }
        } while (T != 1 && T != 2); // Repete até que o usuário digite 1 ou 2

        if (T == 1) {
            pequeno++; // Conta o número de camisetas pequenas solicitadas
        } else {
            medio++; // Conta o número de camisetas médias solicitadas
        }
    }

    // Solicita e lê o número de camisetas pequenas produzidas
    printf("Digite o número de camisetas pequenas produzidas:\n");
    scanf("%d", &P);

    // Solicita e lê o número de camisetas médias produzidas
    printf("Digite o número de camisetas médias produzidas:\n");
    scanf("%d", &M);

    // Verifica se a quantidade produzida atende a demanda
    if (pequeno <= P && medio <= M) {
        printf("\nS\n"); // Todos os premiados serão atendidos
    } else {
        printf("\nN\n"); // Nem todos os premiados serão atendidos
    }

    return 0;
}
