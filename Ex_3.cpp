#include <stdio.h>
#include <stdlib.h>

//Função que verifica se y está presente no vetor J
int contarElemento(int J[], int A, int y) {
    for (int i = 0; i < A; i++) {
        if (J[i] == y) {
            return 1;
        }
    }
    return 0; // Elemento não encontrado
}

int main(){
	int J[100], A, y;

    // Leitura do tamanho do vetor
    printf("Digite o tamanho do vetor J: ");
    scanf("%d", &J);

    // Leitura dos elementos do vetor
    printf("Digite os %d elementos do vetor J:\n", A);
    for (int i = 0; i < A; i++) {
        scanf("%d", &J[i]);
    }

    // Leitura do elemento a ser buscado
    printf("Digite o elemento a ser buscado: ");
    scanf("%d", &y);

    // Verifica se o elemento está presente
    if (contarElemento(J, A, y)) {
        printf("O elemento %d está presente no vetor.\n", y);
    } else {
        printf("O elemento %d NÃO está presente no vetor.\n", y);
    }
}
