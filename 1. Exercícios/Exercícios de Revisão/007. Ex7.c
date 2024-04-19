// 7) Faça um Programa que leia um número e exiba o dia correspondente da semana.
// (1- Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.

#include <stdio.h>

void main() {

	char dia;

	printf("Digite um número de 1 a 7:\n");
	scanf("%c", &dia);

	if (dia == '1')
		printf("Segunda-feira");

	else if (dia == '2')
		printf("Terça-feira");

	else if (dia == '3')
		printf("Quarta-feira");

	else if (dia == '4')
		printf("Quinta-feira");

	else if (dia == '5')
		printf("Sexta-feira");

	else if (dia == '6')
		printf("Sábado");

	else if (dia == '7')
		printf("Domingo");

	else
		printf("Valor Inválido");

	}


