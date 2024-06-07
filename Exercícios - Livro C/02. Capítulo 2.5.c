// 2.5
// Seja "e" uma variável contendo o número de erros detectados num certo processo.

// Codifique uma instrução capaz de exibir saídas como:

// 1 erro detectado.
// 5 erros detectados.

#include <stdio.h>

void main() {

	int e;

	printf("Digite o número de erros detectados:\n");
	scanf("%d", &e);

	if (e == 1) {

		printf("\n%d erro detectado.", e);

	} else {

		printf("\n%d erros detectados.", e);
	}


}
