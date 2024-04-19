// 5) Faça um Programa que pergunte em que turno você estuda.
// Peça para digitar M- matutino ou V-Vespertino ou N- Noturno.
// Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.

#include <stdio.h>

void main() {

	char turno;

	printf("Em que turno você estuda?\n");
	printf("Digite \"M\" para \"matutino\", \"V\" para \"vespertino\", \"N\" para \"Noturno\":\n");
	scanf("%c", &turno);

	if (turno == 'm' || turno == 'M')
		printf("Bom Dia!");

	else if (turno == 'v' || turno == 'V')
		printf("Boa Tarde!");

	else if (turno == 'n' || turno == 'N')
		printf("Boa Noite!");

	else
		printf("Valor Inválido!");

}