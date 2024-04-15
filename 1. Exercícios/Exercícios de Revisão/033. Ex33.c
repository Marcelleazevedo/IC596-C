// 33) Faça um programa que leia um vetor de 5 números inteiros, mostre a soma, a multiplicação e os números.

#include <stdio.h>

main() {

	int i, num[5], soma, multiplica;

	for (i = 1; i <= 5; i++) {

		printf("Digite um número inteiro:\n");
		scanf("%d", &num[i]);

	} // Final do for

	soma = 0;

	for (i = 1; i <= 5; i++) {

		soma += num[i]; // Isso significa: soma = soma + num[i];

	} // Final do for

	printf("\nSoma dos valores: %d\n", soma);

	multiplica = 1;

	for (i = 1; i <= 5; i++) {

		multiplica *= num[i]; 

	}
	printf("Multiplicação dos valores: %d\n", multiplica);

	printf("\nOs números:\n");

	for (i = 1; i <= 5; i++) {

		printf("%dº número: %d\n", i, num[i]);
	}

}


