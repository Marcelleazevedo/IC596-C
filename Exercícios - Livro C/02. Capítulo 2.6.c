// 2.6
// Codifique uma instrução para exibir valores lógicos como true e false.
// Para o valor 0 deve aparecer false e para outro, true.

#include <stdio.h>

void main() {

	int num;

	printf("Digite um número:\n");
	scanf("%d", &num);

	if (num == 0) {

		printf("false");

	} else {

		printf("true");

	}

}