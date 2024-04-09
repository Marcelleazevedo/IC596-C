// 11) Um posto está vendendo combustíveis com a seguinte tabela de descontos:
// a) Álcool:
// i. até 20 litros, desconto de 3% por litro
// ii. acima de 20 litros, desconto de 5% por litro

// b) Gasolina:
// i. até 20 litros, desconto de 4% por litro
// ii. acima de 20 litros, desconto de 6% por litro

//Escreva um programa que leia:
// o número de litros vendidos
// o tipo de combustível (codificado da seguinte forma: A - álcool, G - gasolina)
// calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 5,40 o preço do litro do álcool é R$ 4,90.

#include <stdio.h>

main(){

	float combustivel;
	char tipo;

	//Escreva um programa que leia:
	// o número de litros vendidos

	printf("Quantos litros de combustível o cliente comprou?\n");
	scanf("%f", &combustivel);

	// o tipo de combustível (codificado da seguinte forma: A - álcool, G - gasolina)

	printf("Qual o tipo de combustível?\nDigite uma letra:\nA - álcool, G - gasolina\n");
	scanf(" %c", &tipo);

	// calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 5,40 o preço do litro do álcool é R$ 4,90.

	switch (tipo) {

		case 'a' :
		case 'A' : 

			// a) Álcool:
			// i. até 20 litros, desconto de 3% por litro
			// ii. acima de 20 litros, desconto de 5% por litro

			if (combustivel <= 20)
				printf("O valor que o cliente deve pagar é %.2f", (4.90*0.97)*combustivel);

			else
				printf("O valor que o cliente deve pagar é %.2f", (4.90*0.95)*combustivel);

		break;
		
		case 'g' :
		case 'G' : 

			// b) Gasolina:
			// i. até 20 litros, desconto de 4% por litro
			// ii. acima de 20 litros, desconto de 6% por litro

			if (combustivel <= 20)
				printf("O valor que o cliente deve pagar é %.2f", (5.40*0.96)*combustivel);

			else
				printf("O valor que o cliente deve pagar é %.2f", (5.40*0.94)*combustivel);

		

	}

}