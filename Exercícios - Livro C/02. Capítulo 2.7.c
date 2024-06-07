// 2.7
// Numa faculdade, os alunos com média pelo menos 7.0 são aprovados, aqueles com média inferior a 3.0 são reprovados
// e os demais ficam de recuperação. Dadas as duas notas de um aluno, informe sua situação.
// Use as cores azul, vermelho e amarelo para as mensagens aprovado, reprovado e recuperação, respectivamente.

#include <stdio.h>

void main() {

	float nota1, nota2, media;

	printf("Digite a primeira nota do aluno:\n");
	scanf("%f", &nota1);

	printf("Digite a segunda nota do aluno:\n");
	scanf("%f", &nota2);

	media = (nota1 + nota2) / 2;

	if (media >= 7) {

		// Cor azul
		printf("\33[0;34m");
		printf("\nO aluno foi aprovado.");

	} else if (media < 7 && media >= 3) {

		// Cor amarela
		printf("\33[0;33m");
		printf("\nO aluno está em recuperação.");

	} else {

		// Cor vermelha
		printf("\33[0;31m");
		printf("\nO aluno foi reprovado.");

	}

}