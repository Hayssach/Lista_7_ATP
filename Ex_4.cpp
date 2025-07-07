#include <stdio.h>
#include <stdlib.h>

void imprimeIntersecao(int J[], int K[], int L) {
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < L; j++) {
            if (J[i] == K[j]) {
                // Verifica se já foi impresso antes
                int jaImpresso = 0;
                for (int j = 0; j < i; j++) {
                    if (K[j] == J[i]) {
                        jaImpresso = 1;
                        break;
                    }
                }
                if (!jaImpresso) {
                    printf("%d ", J[i]);
                }
                break;
            }
        }
    }
    printf("\n");
}

int main() {
    int Y;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &Y);

    int *B = malloc(Y * sizeof(int));
    int *D = malloc(Y * sizeof(int));

    if (B == NULL || D == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Digite os elementos do vetor A:\n");
    for (int i = 0; i < Y; i++) {
        scanf("%d", &J[i]);
    }

    printf("Digite os elementos do vetor B:\n");
    for (int i = 0; i < Y; i++) {
        scanf("%d", &K[i]);
    }

    printf("Elementos em comum: ");
    imprimeIntersecao(B, D, Y);

    free(B);
    free(D);

    return 0;
}
