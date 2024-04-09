// 22) Faça um programa que peça um número inteiro e determine se ele é ou não um número primo.
// Um número primo é aquele que é divisível somente por ele mesmo e por 1.

#include <stdio.h>

main() {

	int num, i, contDivisores;

	printf("Digite um número inteiro:\n");
	scanf("%d", &num);

	contDivisores = 0;

	for (i = 1; i <= num; i++) {

		if (num % i == 0) {

			contDivisores = contDivisores + 1;
		}

	}

	if (contDivisores == 2) {
		printf("O número é primo.\n");

	} else {

		printf("O número não é primo.\n");

	}


}


