// 8) Faça um Programa que tendo como dados de entrada o preço de custo de um produto e um código de origem,
// emita o preço junto de sua procedência.
// Caso o código não seja nenhum dos especificados, o produto deve ser classificado como importado.
// Código de origem: 1 - Sul, 2 - Norte 3 - Leste, 4 - Oeste, 5 ou 6 - nordeste 7 ou 8 Centro-oeste.

#include <stdio.h>

main() {

	float preco;
	char codigo;

	printf("Digite o preço do produto:\n");
	scanf("%f", &preco);

	printf("Digite o código do produto:\n");
	scanf(" %c", &codigo);

	printf("O valor do produto é %.2f\n", preco);

	if (codigo == '1')
		printf("Código de origem: Sul");

	else if (codigo == '2')
		printf("Código de origem: Norte");

	else if (codigo == '3')
	printf("Código de origem: Leste");

	else if (codigo == '4')
		printf("Código de origem: Oeste");

	else if (codigo == '5' || codigo == '6')
		printf("Código de origem: Nordeste");

	else if (codigo == '7')
		printf("Código de origem: Centro-oeste");

	else
		printf("Código de origem: Importado");


}
