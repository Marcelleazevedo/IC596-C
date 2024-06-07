// 1.3
// Dadas as duas notas de um aluno, informe a sua média final.

#include <stdio.h>

void main() {

	float nota1, nota2, media;

	printf("Digite a primeira nota do aluno:\n");
	scanf("%f", &nota1);

	printf("Digite a segunda nota do aluno:\n\n");
	scanf("%f", &nota2);

	media = (nota1 + nota2) / 2;

	printf("Média da nota do aluno: %.2f", media);

}
