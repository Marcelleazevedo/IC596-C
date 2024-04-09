//15) Faça um programa que receba dois números inteiros
//e gere os números inteiros que estão no intervalo compreendido por eles.

#include <stdio.h>

main() {

	int num1, num2, i;

	printf("Digite um número inteiro:\n");
	scanf("%d", &num1);

	printf("Digite um número inteiro diferente do anterior:\n");
	scanf("%d", &num2);

	if (num1 < num2) {

		for (i = num1+1; i < num2; i++)
			printf("%d\n", i);
	} else {

		for (i = num1-1; i > num2; i--)
			printf("%d\n", i);

	}


}
