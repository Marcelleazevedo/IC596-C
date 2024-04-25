// 43) Escreva um programa que leia uma matriz de 10 linhas por 10 colunas contendo números inteiros.
// O programa deve ler um número inteiro e imprimir todas as linhas e colunas que contenham este número.
// O programa deve informar que linha e coluna está imprimindo.


#include <stdio.h>

void main() {

	int i, j, x, contador, matriz[10][10];


	printf("Preencha os valores da matriz:\n");
	
	for (i = 0; i < 9; i++) {

		for (j = 0; j < 9; j++) {

			printf("Valor da linha %d e coluna %d: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);

		} // Final da coluna

	} // Final da linha

	x = 0;
	contador = 0;

	while (x != -1) {

		printf("\nPara finalizar digite -1:\n");
		printf("Digite um número inteiro:\n");
		scanf("%d", &x);

		for (i = 0; i < 10; i++) {

			for (j = 0; j < 10; j++) {

				if (matriz[i][j] == x) {

					printf("O número aparece na posição: linha %d coluna %d\n", i+1, j+1);

					contador++;

				} 

				if ((i == 9) && (j == 9) && (contador == 0)) {

					printf("O número não aparece em nenhum momento na matriz.\n");

				}

			} // final da coluna

		} // final da linha

		contador = 0;

	} // Final do while

}

