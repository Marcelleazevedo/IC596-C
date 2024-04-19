// 36) Utilizando 5 vetores para armazenar as respostas de 30 pessoas (codifique 1 = sim e 0 = não), escreva um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são (armazene as respostas de cada pergunta em um dos 5 vetores criados):

// a) "Telefonou para a vítima?"
// b) "Esteve no local do crime?"
// c) "Mora perto da vítima?"
// d) "Devia para a vítima?"
// e) "Já trabalhou com a vítima?"

// O programa deve no final emitir uma classificação sobre a participação da pessoa no crime.
// Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita"
// entre 3 e 4 como "Cúmplice"
// e 5 como "Assassino"
// Caso contrário, ele será classificado como "Inocente".


#include <stdio.h>

void main(){

	int i, r1[30], r2[30], r3[30], r4[30], r5[30], soma[30];

	for (i = 0; i <= 29; i++) {

		printf("\nPessoa %d\nDigite 0 para \"não\" e 1 para \"sim\":\n", i+1);

		printf("Telefonou para a vítima?\n");
		scanf("%d", &r1[i]);

		printf("Esteve no local do crime?\n");
		scanf("%d", &r2[i]);

		printf("Mora perto da vítima?\n");
		scanf("%d", &r3[i]);

		printf("Devia para a vítima?\n");
		scanf("%d", &r4[i]);

		printf("Já trabalhou com a vítima?\n");
		scanf("%d", &r5[i]);

		soma[i] = r1[i] + r2[i] + r3[i] + r4[i] + r5[i];

	} // Final do for

	printf("\n");

	for (i = 0; i <= 29; i++) {

		switch(soma[i]) {

			// Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita"

			case 2 :
					printf("Pessoa %d: Suspeita\n", i+1);
					break;

			// entre 3 e 4 como "Suspeita"

			case 3 :
			case 4 :
					printf("Pessoa %d: Cúmplice\n", i+1);
					break;

			// e 5 como "Assassino"

			case 5 :
					printf("Pessoa %d: Assassino\n", i+1);
					break;

			// Caso contrário, ele será classificado como "Inocente".

			default :
					printf("Pessoa %d: Inocente\n", i+1);
					break;

		} // Final do switch

	} // Final do for




}


