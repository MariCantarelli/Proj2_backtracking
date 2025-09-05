#include <stdio.h>
#include <stdlib.h>

void gerarArranjo(int n, int* arr, int k) {
    // Caso base: se a profundidade k é igual a n, o arranjo está completo.
    if (k == n) {
        // Imprime o arranjo gerado
        for (int i = 0; i < n; i++) {
            printf("%d", arr[i]);
        }
        printf(" ");
        return;
    }

    // Passo recursivo: itera de 1 a n para a posição atual k.
    for (int i = 1; i <= n; i++) {
        arr[k] = i; // Coloca o número i na posição atual
        gerarArranjo(n, arr, k + 1); // Chama a função para a próxima posição
    }
}

int main() {
    int n = 3;
    int* arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    printf("Arranjo com repetição para n = %d:\n", n);
    gerarArranjo(n, arr, 0);
    printf("\n");

    free(arr);
    return 0;
}