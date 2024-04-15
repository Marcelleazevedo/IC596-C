// 35) Foram anotadas as idades e alturas de 30 alunos.
// Faça um Programa que determine quantos alunos com mais de 13 anos possuem altura inferior à média de altura desses alunos.

#include <stdio.h>

main() {

	int i, idade[3], altura[3], soma, total;
	float media;

	soma = 0;

	for (i = 0; i <= 2; i++) {

		printf("\nDigite a sua idade:\n");
		scanf("%d", &idade[i]);

		printf("Digite a sua altura(em centímetros):\n");
		scanf("%d", &altura[i]);

		soma += altura[i];

	} // Final do for

	media = soma / 3;

	printf("%d", soma);

	total = 0;

	for (i = 0; i <= 2; i++) {

		if (idade[i] > 13 && altura[i] < media) {

			total++;

		} // Final do if
		
	} // Final do for

	printf("\n\n%d jogadores tem mais de 13 anos e possuem altura inferior à média da altura dos 30 alunos.", total);

}


