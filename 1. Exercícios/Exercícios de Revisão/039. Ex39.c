// 39) Escrever um programa que lê uma matriz M(5,5) de inteiros
// e cria dois vetores SL(5) e SC(5) que contêm, respectivamente, a soma das linhas e das colunas de M.

// Imprimir:
// a) a matriz (com impressão formatada ) e os vetores criados,
// b) a média do vetor SL
// c) o maior elemento de M
// d) a média dos elementos da diagonal principal.

#include <stdio.h>

void main() {

	int M[5][5], SL[5], SC[5], i, j, somaSL, maiorM, mediaDiagonal;

	maiorM = -32000;

	for (i = 0; i <= 4; i++) {

		for (j = 0; j <= 4; j++) {

			printf("linha %d coluna %d: ", i+1, j+1);
			scanf("%d", &M[i][j]);

			// Vetor que soma o valor das linhas:

			SL[i] += M[i][j];

			// Vetor que soma o valor das colunas:

			SC[j] += M[i][j];

			// Maior elemento de M[5]

			if (M[i][j] > maiorM) {

				maiorM = M[i][j];
			}
			
		} // Final da Linha

	} // Final da Coluna

	// a) a matriz (com impressão formatada ) e os vetores criados,

	printf("\nA matriz M[5][5]:\n\n");

	for (i = 0; i <= 4; i++) {

		for (j = 0; j <= 4; j++) {

			printf("%d ", M[i][j]);

		} // Final da Linha

		printf("\n");
	
	} // Final da Coluna

	somaSL = 0;

	printf("\nVetor SL[5]:\n");

	for (i = 0; i <= 4; i++) {

		printf("Soma da linha %d: %d\n", i+1, SL[i]);

		somaSL += SL[i];

	}

		printf("\nSoma da coluna:\n");

	for (i = 0; i <= 4; i++) {

		printf("Soma da coluna %d: %d\n", i+1, SC[i]);

	}

	// b) a média do vetor SL

	printf("\nA média do vetor SL: %.2f\n", (float)somaSL/5);

	// c) o maior elemento de M

	printf("\nO maior elemento de M: %d\n", maiorM);

	// d) a média dos elementos da diagonal principal.

	mediaDiagonal = 0;

	for (i = 0; i <= 4; i++) {

		mediaDiagonal += M[i][i];
	}

	printf("\nA média dos elementos da diagonal principal: %.2f\n", (float)mediaDiagonal/5);




}


