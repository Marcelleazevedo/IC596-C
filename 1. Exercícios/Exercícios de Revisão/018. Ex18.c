// 18) Faça um programa que peça dois números, base e expoente,
// calcule e mostre o primeiro número elevado ao segundo número.
// Não utilize a função de potência da linguagem.

#include <stdio.h>

main() {

	int base, expoente, i, resultado;

	printf("Digite o número que será a base:\n");
	scanf("%d", &base);

	printf("Digite o número que será o expoente:\n");
	scanf("%d", &expoente);

	resultado = base;

	for (i = expoente; i >= 2; i--) {

		resultado = resultado * base;

	}

	printf("%d elevado a %d é: %d", base, expoente, resultado);

}
