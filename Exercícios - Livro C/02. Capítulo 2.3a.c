// 2.3b
// Dado um ano, informe se ele é ou não bissexto.
// [Dica: um ano é bissexto se é divisível por 4, mas não por 100] ou [se for divisível por 400].

#include <stdio.h>

void main() {

	int ano;

	printf("Digite um ano:\nExemplo: 1994\n");
	scanf("%d", &ano);

	if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {

		printf("\nO ano %d é bissexto.", ano);

	} else {

		printf("\nO ano %d não é bissexto.", ano);

	}

}