#include <stdio.h>
#include <stdlib.h>

int main(){
	  char palavra[100];

    // Solicita a palavra ao usuário
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    // Imprime a primeira letra no formato pedido
    printf("%s começa com %c\n", palavra, palavra[0]);
}
