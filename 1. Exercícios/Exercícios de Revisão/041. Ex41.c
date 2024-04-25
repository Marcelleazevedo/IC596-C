// 41) Escreva um programa que lê uma matriz 4x5 e imprime o maior número de cada linha
// indicando a que linha cada número pertence.

#include <stdio.h>

void main() {

	int i, j, matriz[4][5], maior[4], posicao[4] ;

	for (i = 0; i < 4; i++) {

		maior[i] = -32000;

	} // Final do for

	printf("Preencha os valores da matriz:\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++) {

			printf("Linha %d, coluna %d:\n", i, j);
			scanf("%d", &matriz[i][j]);

			if(matriz[i][j] > maior[i]) { // Valor do maior número da linha

					maior[i] = matriz[i][j];
					posicao[i] = j+1;

			} // Final do if

		} // Final da coluna

	} // Final linha

	printf("\nMaiores valores de cada linha e suas respectivas posições:\n");

	for (i = 0; i < 4; i++) {

		printf("Maior número da linha %d: %d, posição na matriz: %d\n", i+1, maior[i], posicao[i]);

	} // Final do for

}


