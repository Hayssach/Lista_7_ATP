#include <stdio.h>
#include <stdlib.h>

void inverteArray(int *a, int tam) {
    int *i = a;
    int *f = a + tam - 1;

    while (i < f) {
        int temp = *i;
        *i = *f;
        *f = temp;

        i++;
        f--;
    }
}

int main() {
    int TAM;

    printf("Digite o tamanho do array: ");
    scanf("%d", &TAM);

    int *v = malloc(TAM * sizeof(int));
    if (v == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &v[i]);
    }

    inverteArray(v, TAM);

    printf("Array invertido:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    free(v);

    return 0;
}
