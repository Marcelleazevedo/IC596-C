// 17) Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 e 10.
// O usuário deve informar de qual numero ele deseja ver a tabuada.
//A saída deve ser conforme o exemplo abaixo:

// Tabuada de 5:
// 5 x 1 = 5
// 5 x 2 = 10
// ...
// 5 x 10 = 50

#include <stdio.h>

void main() {

	int num, i;

	printf("Digite um número:\n");
	scanf(" %d", &num);

	for (i = 1; i <= 10 ; i++) {

		if (i == 1) {
		printf("Tabuada de %d\n", num);

	}

		printf("%d x %d = %d\n", num, i, num*i);
	}

}

