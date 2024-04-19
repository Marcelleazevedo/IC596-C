// 19) Faça um programa que peça 10 números inteiros,
// calcule e mostre a quantidade de números pares e a quantidade de números ímpares.

#include <stdio.h>

void main(){

	int num, numpares, numimpares, i;

	numpares = 0;
	numimpares = 0;

	for (i = 1; i <= 10; i++) {

		printf("Digite um número inteiro:\n");
		scanf("%d", &num);

		if (num % 2 == 0) {

			numpares++;

		} else {

		numimpares++;

		}

	}

	printf("Quantidade de números pares: %d\n", numpares);
	printf("Quantidade de números ímpares: %d\n", numimpares);

}

