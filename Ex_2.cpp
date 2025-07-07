#include <stdio.h>
#include <stdlib.h>

int main(){
	 int I[5], J[5];

    printf("Digite 5 valores para o vetor I:\n");
    for (int j = 0; j < 5; j++) {
        printf("I[%d]: ", j);
        scanf("%d", &I[j]);
    }

    printf("Digite 5 valores para o vetor J:\n");
    for (int j = 0; j < 5; j++) {
        printf("J[%d]: ", j);
        scanf("%d", &J[j]);
    }

    // Impressão intercalada dos valores
    printf("\nValores intercalados:\n");
    for (int j = 0; j < 5; j++) {
        printf("%d ", I[j]);
        printf("%d ", J[j]);
    }

    printf("\n");
}
