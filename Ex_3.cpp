#include <stdio.h>
#include <stdlib.h>

//Função que verifica se x está presente no vetor A
int contemElemento(int A[], int T, int x) {
    for (int i = 0; i < T; i++) {
        if (A[i] == x) {
            return 1; // Elemento encontrado
        }
    }
    return 0; // Elemento não encontrado
}

int main(){
	int A[100], T, x;

    // Leitura do tamanho do vetor
    printf("Digite o tamanho do vetor A: ");
    scanf("%d", &T);

    // Leitura dos elementos do vetor
    printf("Digite os %d elementos do vetor A:\n", T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &A[i]);
    }

    // Leitura do elemento a ser buscado
    printf("Digite o elemento a ser buscado: ");
    scanf("%d", &x);

    // Verifica se o elemento está presente
    if (contemElemento(A, T, x)) {
        printf("O elemento %d está presente no vetor.\n", x);
    } else {
        printf("O elemento %d NÃO está presente no vetor.\n", x);
    }
}
