// 20) Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário.
// Ex.: 5! = 5.4.3.2.1=120

#include <stdio.h>

void main() {

	int fatorial, num, i;

	printf("Digite um número inteiro:\n");
	scanf("%d", &fatorial);

	num = fatorial;

	for (i = 1; i < num; i++) {

		fatorial = fatorial * i;

	}

	printf("Fatorial de %d: %d", num, fatorial);

}
