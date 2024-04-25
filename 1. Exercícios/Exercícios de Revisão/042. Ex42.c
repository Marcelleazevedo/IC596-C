// 42) Ler uma matriz 5x5 e apresentar:

// a soma da diagonal principal
// os números acima dela
// e a média dos números abaixo da diagonal.

#include <stdio.h>

void main() {

	int i, j, x, y, diagonal, abaixoNumero, abaixoSoma, matriz[5][5], diagonalSoma;
	float abaixoMedia;

	printf("Preencha os valores da matriz: \n");

	x = -1;
	y = -1;
	abaixoNumero = 0;
	abaixoSoma = 0;
	diagonalSoma = 0;

	for (i = 0; i < 5; i++) {

		x++;
		y++;

		for (j = 0; j < 5; j++) {

			printf("\nLinha %d, coluna %d:", i, j);
			scanf("%d", &matriz[i][j]);

			if (i == j) { // Soma dos números da diagonal principal

				diagonalSoma += matriz[i][j];

			} // Final do if

			if (i != 0 && j < y) { // Soma dos números abaixo da diagonal principal

				abaixoSoma += matriz[i][j];
				abaixoNumero++;

			} // Final do if

		} // Final da coluna

	} // Final linha

	// a soma da diagonal principal

	printf("\nA soma dos números da diagonal principal: %d\n", diagonalSoma);

	// os números acima dela

	printf("\nOs números acima da diagonal principal:\n");

	x = -1;
	y = -1;

	for (i = 0; i < 5; i++) {

		x++;
		y++;
		
		for (j = 0; j < 5; j++) {

			if (i != 4 && j > x) {

				printf("%d ", matriz[i][j]);

			} // Final do if 

		} // Final da coluna

		printf("\n");

	} // Final da linha

	// e a média dos números abaixo da diagonal.

	abaixoMedia = abaixoSoma/abaixoNumero;

	printf("\nA média dos números abaixo da diagonal: %.2f", abaixoMedia);

}