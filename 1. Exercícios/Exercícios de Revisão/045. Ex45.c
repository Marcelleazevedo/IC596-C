// 45) Escreva uma função bloco que recebe como parâmetro um inteiro n e lê n inteiros do teclado
// devolvendo um dos seguintes valores:

// a) 0, se os n números lidos forem pares;
// b) 1, se os n números lidos forem ímpares;
// c) -1, se entre os n números lidos há números com paridades diferentes.

#include <stdio.h>

int bloco(int n) {

	int i, numero, pares = 0, impares = 0;

	for (i = 0; i < n; i++) {

		printf("\nDigite o %dº número: ", i+1);
		scanf("%d", &numero);

		if (numero % 2 == 0) {

			pares++;

		} else {

			impares++;

		} // Final do if

	} // Final do for

	if ((pares > 0) && (impares == 0)) { // Esse código verifica se todos os números são pares

		return 0;

	} else if (pares == 0) { // Esse código verifica se todos os números são ímpares

		return 1;
	
	} else { // Esse código verifica se os números são pares e ímpares

		return -1;

	}

} // Final da função numeros


void main() {

	int n, resultado;

	printf("Quantos números serão lidos?\n");
	scanf("%d", &n);

	resultado = bloco(n);

	// a) 0, se os n números lidos forem pares;
	// b) 1, se os n números lidos forem ímpares;
	// c) -1, se entre os n números lidos há números com paridades diferentes.

	printf("\nResultado: %d", resultado);

}


