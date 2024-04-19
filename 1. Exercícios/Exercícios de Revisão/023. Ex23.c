// 23) Faça um programa que calcule o mostre a média aritmética de N notas.

#include <stdio.h>

void main() {

	int i, num;
	float nota, soma;

	printf("Digite o número de avaliações que o aluno fez:\n");
	scanf("%d", &num);

	soma = 0;

	for (i = 1; i <= num; i++) {

		printf("Digite o valor da nota: %d\n", i);
		scanf("%f", &nota);

		soma = soma + nota;

	}

	printf("A média das %d notas do aluno é %.2f", num, soma/num);
}
