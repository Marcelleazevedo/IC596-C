// 29) Faça um programa que leia 5 números e informe a soma e a média dos números.

#include <stdio.h>

main() {

	int i;
	float num, soma;

	soma = 0;

	for (i = 1; i <= 5; i++) {

		printf("Digite um número:\n");
		scanf("%f", &num);

	// informe a soma

		soma = soma + num;
	}

	// e a média dos números.

	printf("A soma dos números é %.2f\n", soma);
	printf("A média dos números é %.2f\n", soma/5);

}
