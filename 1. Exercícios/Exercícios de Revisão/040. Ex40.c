// 40) Ler duas matrizes A e B, ambas 5x5, e apresentar a matriz C, tal que: C=√(A² + B²)

#include <stdio.h>
#include <math.h> // Ela será incluída para utilizarmos a função sqrt() e pow()

void main() {

	int matrizA[2][2], matrizB[2][2], i, j;
	float matrizC[2][2];

	printf("Preencha o valor da matriz A:\n");

	for (i = 0; i <= 1; i++) {

		for (j = 0; j <= 1; j++) {

			printf("Linha %d, coluna %d: ", i+1, j+1);
			scanf("%d", &matrizA[i][j]);

		} // Final da linha
	
	} // Final da coluna

	printf("\nPreencha o valor da matriz A:\n");

	for (i = 0; i <= 1; i++) {

		for (j = 0; j <= 1; j++) {

			printf("Linha %d, coluna %d: ", i+1, j+1);
			scanf("%d", &matrizB[i][j]);

		} // Final da linha

	} // Final da coluna

	printf("\nValor da matriz A:\n");

	for (i = 0; i <= 1; i++) {

		for (j = 0; j <= 1; j++) {

			printf("%d ", matrizA[i][j]);

		} // Final da linha

		printf("\n");

	} // Final da coluna

	printf("\nValor da matriz B:\n");

	for (i = 0; i <= 1; i++) {

		for (j = 0; j <= 1; j++) {

			printf("%d ", matrizB[i][j]);

		} // Final da linha

		printf("\n");

	} // Final da coluna

	printf("\nValor da matriz C:\n");

	for (i = 0; i <= 1; i++) {

		for (j = 0; j <= 1; j++) {

			matrizC[i][j] = sqrt(pow(matrizA[i][j], 2) + pow(matrizB[i][j], 2));

			// pow() significa power (potência em inglês)
			// sqrt() significa square root (raiz quadrada)

			printf("%.2f ", matrizC[i][j]);

		} // Final da linha

		printf("\n");

	} // Final da coluna

}



