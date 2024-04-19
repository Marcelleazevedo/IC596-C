// 10) Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:

// a) "Telefonou para a vítima?"
// b) "Esteve no local do crime?"
// c) "Mora perto da vítima?"
// d) "Devia para a vítima?"
// e) "Já trabalhou com a vítima?"

// O programa deve no final emitir uma classificação sobre a participação da pessoa no crime.
// Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita"
// entre 3 e 4 como "Cúmplice"
// e 5 como "Assassino".
// Caso contrário, ele será classificado como "Inocente".

#include <stdio.h>

void main(){

	int contagem;
	char r1, r2, r3, r4, r5;

	contagem = 0;
	
	printf("Digite 'S' para 'Sim' ou 'N' para 'Não':\n");

	printf("Telefonou para a vítima?\n");
	scanf(" %c", &r1);

	if (r1 == 's')
		contagem++;

	printf("Esteve no local do crime?\n");
	scanf(" %c", &r2);

	if (r2 == 's')
		contagem++;

	printf("Mora perto da vítima?\n");
	scanf(" %c", &r3);

	if (r3 == 's')
		contagem++;

	printf("Devia para a vítima?\n");
	scanf(" %c", &r4);

	if (r4 == 's')
		contagem++;

	printf("Já trabalhou com a vítima?\n");
	scanf(" %c", &r5);

	if (r5 == 's')
		contagem++;

	switch (contagem){

	// Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita"

	case 2 : printf("Suspeita");
		break;

	// entre 3 e 4 como "Cúmplice"

	case 3 :
	case 4 : printf("Cúmplice");
		break;
	
	// e 5 como "Assassino".

	case 5 : printf("Assasino");
		break;

	// Caso contrário, ele será classificado como "Inocente".

	default : printf("Inocente");
		break;

	}


}


