// 49) Faça um programa em C que leia um vetor de 30 inteiros e implemente as funções a seguir, utilizando,
// OBRIGATORIAMENTE, ponteiros e passagem de parâmetros por referência:

// a) void zeraPares (int *vet): recebe um vetor e troca todos os números pares contidos nele pelo zero.
// b) void dobra (int *vet): recebe um vetor e multiplica todos os seus elementos por dois.
// c) void soma (int *vet1, int * vet2): recebe dois vetores de inteiros e soma cada par de elementos
// de mesmo índice, colocando o resultado no primeiro vetor.


#include <stdio.h>

// a) void zeraPares (int *vet): recebe um vetor e troca todos os números pares contidos nele pelo zero.

void zeraPares(int *vet) {

	for (int i = 0; i <= 3 ; i++) {

		if (vet[i] % 2 == 0) {

			vet[i] = 0;

		} // Final do if

	} // Final do for	

} // Final da função zeraPares


// b) void dobra (int *vet): recebe um vetor e multiplica todos os seus elementos por dois.

void dobra(int *vet) {

	for (int i = 0; i <= 3; i++) {

		vet[i] *= 2; // Esse código é o mesmo que vet[i] = vet[i] * 2;

	} // Final do for

} // Final da função dobra


// c) void soma (int *vet1, int *vet2): recebe dois vetores de inteiros e soma cada par de elementos
// de mesmo índice, colocando o resultado no primeiro vetor.

	void soma(int *vet1, int *vet2) {

		for (int i = 0; i <= 3; i++) {

			vet1[i] += vet2[i]; // Esse código é o mesmo que vet1[i] = vet1[i] + vet2[i];

		} // Final do for

	} // Final da função soma


void main() {

	int i, vetor1[30], vetor1Copia1[30], vetor1Copia2[30], vetor2[30];

	printf("\nPreencha os valores do primeiro vetor:\n");

	for (i = 0; i <= 3; i++) {

		printf("Digite o %dº valor do vetor: ", i+1);
		scanf("%d", &vetor1[i]);
	
		vetor1Copia1[i] = vetor1[i]; // vetor1Copia1[30] terá seus elementos multiplicados
		vetor1Copia2[i] = vetor1[i]; // vetor1Copia2[30] terá seus elementos somados com o segundo vetor

	} // Final do for

	// a) void zeraPares (int *vet): recebe um vetor e troca todos os números pares contidos nele pelo zero.

	zeraPares(vetor1);

	printf("\nOs números pares do primeiro vetor:\n");

	for (i = 0; i <= 3; i++) {

		printf("%dº valor: %d\n", i+1, vetor1[i]);

	} // Final do for

	// b) void dobra (int *vet): recebe um vetor e multiplica todos os seus elementos por dois.

	printf("\nOs valores do primeiro vetor sendo multiplicados por 2:\n");

	dobra(vetor1Copia1);

	for (i = 0; i <= 3; i++) {

		printf("%dº valor: %d\n", i+1, vetor1Copia1[i]);

	} // Final do for

	// c) void soma (int *vet1, int * vet2): recebe dois vetores de inteiros e soma cada par de elementos
	// de mesmo índice, colocando o resultado no primeiro vetor.

	printf("\nPreencha os valores do segundo vetor:\n");

	for (i = 0; i <= 3; i++) {

		printf("Digite o %dº valor do vetor: ", i+1);
		scanf("%d", &vetor2[i]);
	
	} // Final do for

	soma(vetor1Copia2, vetor2);

	printf("\nA soma do primeiro e segundo vetor que estão armazenados no primeiro vetor:\n");

	for (i = 0; i <= 3; i++) {

		printf("%dº valor: %d\n", i+1, vetor1Copia2[i]);

	} // Final do for
	
}

