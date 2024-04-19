// 37) Faça um programa que leia um número indeterminado de valores correspondentes a notas
// encerrando a entrada de dados quando for informado um valor igual a -1 (que não deve ser armazenado).
//Após esta entrada de dados, faça:

// a) Mostre a quantidade de valores que foram lidos;
// b) Exiba todos os valores na ordem em que foram informados, um ao lado do outro;
// c) Exiba todos os valores na ordem inversa à que foram informados, um abaixo do outro;
// d) Calcule e mostre a soma dos valores;
// e) Calcule e mostre a média dos valores;
// f) Calcule e mostre a quantidade de valores acima da média calculada;
// g) Calcule e mostre a quantidade de valores abaixo de sete;

#include <stdio.h>

void main() {

	int i, num, acimaMedia, abaixoSete;
	float nota[10], soma, media;

	num = -1;
	soma = 1;

	while (1) {

		num++; // Essa variável irá determinar a posição do vetor e a quantidade de números lidos

		printf("\nDigite a nota:\n(Para encerrar o programa digite -1)\n");
		scanf("%f", &nota[num]);

		soma += nota[num];

		if (nota[num] == -1) {

			break;
		}

	}

	// a) Mostre a quantidade de valores que foram lidos;

	printf("Foram lidos %d notas válidas.\n\n", num);

	// b) Exiba todos os valores na ordem em que foram informados, um ao lado do outro;

	printf("Notas na ordem:\n\n");

	for (i = 0; i < num; i++) {

		printf("%.2f ", nota[i]);
	}

	// c) Exiba todos os valores na ordem inversa à que foram informados, um abaixo do outro;

	printf("\nNotas na ordem inversa:\n\n");

	for (i = num-1; i >= 0; i--) {

		printf("%.2f\n", nota[i]);

	}

	// d) Calcule e mostre a soma dos valores;

	printf("\nSoma dos valores: %.2f\n", soma);

	// e) Calcule e mostre a média dos valores;

	media = (float) soma / num;

	printf("\nMédia dos valores: %.2f\n", media);

	// f) Calcule e mostre a quantidade de valores acima da média calculada;

	printf("\nNúmeros acima da média calculada:\n\n");

	acimaMedia = 0;

	for (i = 0; i < num; i++) {

		if (nota[i] > media) {

			printf("%.2f\n", nota[i]);

			acimaMedia++;

		} // Final do if

	} // Final do for

	if (acimaMedia = 0) {

		printf("\nNão há nenhum número acima da média.\n");
	
	} // Final do for

	// g) Calcule e mostre a quantidade de valores abaixo de sete;

	printf("\nNúmeros abaixo de 7:\n\n");

	abaixoSete = 0;

	for (i = 0; i < num; i++) {

		if (nota[i] < 7) {

			printf("%.2f\n", nota[i]);

			abaixoSete++;

		} // Final do if

	} // Final do for

	if (abaixoSete = 0) {

		printf("\nNão há nenhum número abaixo de 7.");

	} // Final do if

}


