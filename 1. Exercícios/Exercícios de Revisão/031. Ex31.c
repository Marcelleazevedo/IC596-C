// 31) O cardápio de uma lanchonete é o seguinte:

// Especificação Código Preço
// Cachorro-Quente 100 R$ 10,20
// Bauru Simples 101 R$ 13,30
// Bauru com ovo 102 R$ 15,50
// Hambúrguer 103 R$ 10,20
// Cheeseburguer 104 R$ 13,30
// Refrigerante 105 R$ 6,00

// Faça um programa que leia o código dos itens pedidos e as quantidades desejadas.
// Calcule e mostre o valor a ser pago por item (preço * quantidade) e o total geral do pedido.
// Considere que o cliente deve informar quando o pedido deve ser encerrado.

#include <stdio.h>

main() {

	int codigo, num;
	float total, item1, item2, item3, item4, item5, item6;

	total = 0;

	item1 = 10.20;
	item2 = 13.30;
	item3 = 15.50;
	item4 = 10.20;
	item5 = 13.30;
	item6 = 6;

	do { // Início da estrutura de repetição while

		printf("Digite o código para escolher os itens :\n");
		printf("Cachorro-Quente -  100 -  R$ 10,20\nBauru Simples - 101 - R$ 13,30\n Bauru com ovo - 102 - R$ 15,50\nHambúrguer - 103 - R$ 10,20\nCheeseburguer - 104 - R$ 13,30\nRefrigerante - 105 - R$ 6,00\n\n");
		printf("Digite o código 0 para finalizar:\n");
		scanf("%d", &codigo);

		if (codigo != 0) {

			printf("Quantas unidades você quer desse item?\n");
			scanf("%d", &num);

			switch(codigo) {

				case 100 :

					printf("Valor: %.2f\n",total = total + (item1*num));
					break;

				case 101 :
					
					printf("Valor: %.2f\n",total = total + (item2*num));
					break;

				case 102 :

					printf("Valor: %.2f\n",total = total + (item3*num));
					break;

				case 103 :

					printf("Valor: %.2f\n",total = total + (item4*num));
					break;

				case 104 :

					printf("Valor: %.2f\n",total = total + (item5*num));
					break;

				case 105 :

					printf("Valor: %.2f\n",total = total + (item6*num));
					break;

			} // Final do switch

		} // Final do if

		printf("Valor total a ser pago: %.2f\n\n", total);

	} while (codigo != 0);

}



