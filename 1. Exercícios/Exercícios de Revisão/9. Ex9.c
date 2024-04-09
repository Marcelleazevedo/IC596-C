// 9) Faça um Programa que leia 2 números e em seguida pergunte ao usuário qual operação ele deseja realizar.
// O resultado da operação deve ser acompanhado de uma frase que diga se o número é:
// a) par ou ímpar;
// b) positivo ou negativo;
// c) inteiro ou decimal.

#include <stdio.h>

main() {

	float num1, num2, resultado;
	char operacao;

	printf("Digite dois números:\n");
	scanf("%f%f", &num1,&num2);

	printf("\nQual operação você deseja realizar?\nDigite um símbolo:\nMultiplicação: *\n Divisão /\n Subtração - \n Soma +\n");
	scanf(" %c", &operacao);

	if (operacao == '*'){
		resultado = num1*num2;
			printf("%.2f%c%.2f = %.2f\n", num1, operacao, num2, resultado);
		}

	else if (operacao == '/'){
		resultado = num1/num2;
			printf("%.2f%c%.2f = %.2f\n", num1, operacao, num2, resultado);
	}

	else if (operacao == '-'){
		resultado = num1-num2;
			printf("%.2f%c%.2f = %.2f\n", num1, operacao, num2, resultado);
	}

	else if (operacao == '+'){
		resultado = num1+num2;
			printf("%.2f%c%.2f = %.2f\n", num1, operacao, num2, resultado);
	}

	// a) par ou ímpar;

	if ((int)resultado % 2 == 0)
		printf("O número é par.\n");

	else if (resultado * 2 != 0)
		printf("O número é ímpar.\n");

	// b) positivo ou negativo;

	if (resultado > 0)
		printf("O número é positivo.\n");

	else if (resultado < 0)
		printf("O número é negativo.\n");

	// c) inteiro ou decimal.
	
	// Esse método de verificação é chamado de "casting".
	// Explicação sobre o código abaixo: https://www.galirows.com.br/meublog/programacao/verificar-se-numero-inteiro/

	 if (resultado == (int)resultado)
		 printf("O número é inteiro.\n");

	else 
		printf("O número é decimal.\n");

}

