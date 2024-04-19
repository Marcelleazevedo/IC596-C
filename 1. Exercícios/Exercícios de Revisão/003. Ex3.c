// 3) Faça um programa para a leitura de duas notas parciais de um aluno.
// O programa deve calcular a média alcançada por aluno e apresentar:
// a) A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
// b) A mensagem "Reprovado", se a média for menor do que sete;
// c) A mensagem "Aprovado com Distinção", se a média for igual a dez.


#include <stdio.h>

void main() {

	float nota1, nota2, media;

	printf("Digite a primeira nota do aluno:\n");
	scanf("%f", &nota1);

	printf("Digite a segunda nota do aluno:\n");
	scanf("%f", &nota2);

	media = (nota1+nota2)/2;

	// a) A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
	
	if (media >= 7 && media < 10)
		printf("\nAprovado");

	// b) A mensagem "Reprovado", se a média for menor do que sete;

	else if (media < 7)
		printf("\nReprovado");

	// c) A mensagem "Aprovado com Distinção", se a média for igual a dez.

	else if (media = 10)
		printf("Aprovado com Distinção");
	
}