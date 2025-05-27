#include <stdio.h>
#include <stdlib.h>

int main(){
	 int A[5], B[5];

    // Leitura dos valores para o vetor A
    printf("Digite 5 valores para o vetor A:\n");
    for (int i = 0; i < 5; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    // Leitura dos valores para o vetor B
    printf("Digite 5 valores para o vetor B:\n");
    for (int i = 0; i < 5; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    // Impressão intercalada dos valores
    printf("\nValores intercalados:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", A[i]);
        printf("%d ", B[i]);
    }

    printf("\n");
}
