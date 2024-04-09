// 16) Altere o programa anterior para mostrar no final a soma dos números.

// Programa anterior:
// 15) Faça um programa que receba dois números inteiros
// e gere os números inteiros que estão no intervalo compreendido por eles.

#include <stdio.h>

main() {

	int num1, num2, i, soma;

	soma = 0;

	printf("Digite um número inteiro:\n");
	scanf("%d", &num1);

	printf("Digite um número inteiro diferente do anterior:\n");
	scanf("%d", &num2);

	if (num1 < num2) {

		for (i = num1+1; i < num2; i++){
			printf("%d\n", i);
			soma = soma + i;
		}
	} else {

		for (i = num1-1; i > num2; i--)
			printf("%d\n", i);
			soma = soma + i;

	}

	printf("\nValor da soma: %d", soma);

}





