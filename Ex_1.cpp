#include <stdio.h>
#include <stdlib.h>

int main(){
	  char p[100];

    printf("Digite uma palavra: ");
    scanf("%s", p);

    // Imprime a primeira letra
    printf("%s começa com %c\n", p, p[0]);
}
