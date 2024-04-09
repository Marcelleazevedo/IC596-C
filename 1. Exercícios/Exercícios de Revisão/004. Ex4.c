// 4) Faça um programa que:
// pergunte o preço de três produtos
// informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.

#include <stdio.h>

main() {

	float produto1, produto2, produto3;

	printf("(Os três programas a seguir possuem valores diferentes)\n");

	printf("Digite o valor do produto 1:\n");
	scanf("%f", &produto1);

	printf("Digite o valor do produto 2:\n");
	scanf("%f", &produto2);

	printf("Digite o valor do produto 3:\n");
	scanf("%f", &produto3);

	if (produto1 < produto2 && produto1 < produto2)
		printf("Compre o produto 1");

	else if (produto2 < produto1 && produto2 < produto3)
		printf("Compre o produto 2");

	else
		printf("Compre o produto 3");

}
