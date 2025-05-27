#include <stdio.h>
#include <stdlib.h>

void imprimirIntersecao(int A[], int B[], int T) {
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            if (A[i] == B[j]) {
                // Verifica se já foi impresso antes
                int jaImpresso = 0;
                for (int k = 0; k < i; k++) {
                    if (A[k] == A[i]) {
                        jaImpresso = 1;
                        break;
                    }
                }
                if (!jaImpresso) {
                    printf("%d ", A[i]);
                }
                break;
            }
        }
    }
    printf("\n");
}

int main() {
    int T;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &T);

    int *A = malloc(T * sizeof(int));
    int *B = malloc(T * sizeof(int));

    if (A == NULL || B == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Digite os elementos do vetor A:\n");
    for (int i = 0; i < T; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite os elementos do vetor B:\n");
    for (int i = 0; i < T; i++) {
        scanf("%d", &B[i]);
    }

    printf("Elementos em comum: ");
    imprimirIntersecao(A, B, T);

    free(A);
    free(B);

    return 0;
}
