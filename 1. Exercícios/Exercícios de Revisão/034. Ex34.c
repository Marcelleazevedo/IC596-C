// 34) Faça um programa que peça a idade e a altura de 5 pessoas, armazene cada informação no seu respectivo vetor.
// Imprima a idade e a altura na ordem inversa a ordem lida.

#include <stdio.h>

void main() {

	int i, idade[5], altura[5];

	for (i = 0; i <= 4; i++) {

		printf("\nDigite a sua idade:\n");
		scanf("%d", &idade[i]);

		printf("Digite a sua altura em centímetros:\n");
		scanf("%d", &altura[i]);

	} // Final do for

	printf("\n");

	for (i = 4; i >= 0; i--) {

		printf("%dº pessoa: %d anos de idade, %d centímetros.\n", i, idade[i], altura[i]);
		
	} // Final do for

}
