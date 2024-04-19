// 26) Faça um programa que calcule o número médio de alunos por turma.
// Para isto, peça a quantidade de turmas e a quantidade de alunos para cada turma.
// As turmas não podem ter mais de 40 alunos.

#include <stdio.h>

void main() {

	int turmas, i, alunos, soma;
	float media;

	printf("Qual o número de turmas?\n");
	scanf("%d", &turmas);

	soma = 0;

	for (i = 1; i <= turmas; i++) {

		printf("Digite o número de alunos da turma %d\n", i);
		scanf("%d", &alunos);

		if (alunos > 40) { 
	
			printf("O número de alunos não pode ultrapassar 40!\n");

			while (alunos > 40) {

		printf("Digite o número de alunos da turma %d\n", i);
		scanf("%d", &alunos);

			} // while fim

		} // if fim

		soma = soma + alunos;

		printf("\n");

	} // for fim

	media = (float)soma / turmas;

	printf("A média de alunos nas %d turmas é de %.2f", turmas, media);

}
