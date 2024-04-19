// 27) Faça um programa que calcule:
// o valor total investido por um colecionador em sua coleção de CDs
// e o valor médio gasto em cada um deles.
// O usuário deverá informar a quantidade de CDs e o valor para em cada um.

#include <stdio.h>

void main(){

	int cds, i;
	float preco, soma, media;

	printf("Quantos CDs o colecionador comprou?\n");
	scanf("%d", &cds);

	for (i = 1; i <= cds; i++) {

		printf("Informe o valor do %dº CD:\n", i);
		scanf("%f", &preco);

		// o valor total investido por um colecionador em sua coleção de CDs

		soma = soma + preco;

	} //final for

	// e o valor médio gasto em cada um deles.

	media = soma / cds;

	printf("O valor médio investido nos %d CDs do colecionador foi de %.2f reais.", cds, media);


}


