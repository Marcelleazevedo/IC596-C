// 25) Numa eleição existem três candidatos.
// Faça um programa que peça o número total de votantes.
// Peça para cada votante votar e ao final mostrar o número de votos de cada candidato.

#include <stdio.h>

main(){

	int num, i, voto, candidatoA, candidatoB, candidatoC;

	printf("Qual o número total de votantes?\n");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {

		printf("Candidato %d\n", i);
		printf("Digite o número correspondente para votar no candidato:\n1 - BolsoLula\n2 - Eymael\n3 - Javier Milei\n");
		scanf("%d", &voto);

		printf("\n");

		if (voto == 1) {

			candidatoA++;
		} else if (voto == 2) {

			candidatoB++;

		} else

			candidatoC++;

	}

	printf("O candidato Bolsolula recebeu %d votos.\n", candidatoA);
	printf("O candidato Eymael recebeu %d votos.\n", candidatoB);
	printf("O candidato Javier Milei recebeu %d votos.\n", candidatoC);

}

