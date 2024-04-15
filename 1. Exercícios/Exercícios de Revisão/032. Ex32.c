// 32) Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código. Os códigos utilizados são:
// 1, 2, 3, 4 - Votos para os respectivos candidatos
// (você deve montar a tabela, ex: 1 - Jose/ 2- João/etc)
// 5 - Voto Nulo
// 6 - Voto em Branco

// Faça um programa que calcule e mostre:
// a) O total de votos para cada candidato;
// b) O total de votos nulos;
// c) O total de votos em branco;
// d) A percentagem de votos nulos sobre o total de votos;
// e) A percentagem de votos em branco sobre o total de votos. Para finalizar o conjunto de votos tem-se o valor zero.

#include <stdio.h>

main(){

	int voto, can1, can2, can3, can4, nulo, branco, total, porcentagemNulo, porcentagemBranco;

	do {

		printf("Digite o número do candidato para votar nele:\n\n");
		printf("1 - Bolsolula\n2 - Kim Catacoquinho\n3 - Pai dos pobres\n4 - Taokey\n5 - Nulo\n6 - Branco\n\n");
		printf("Para encerrar o programa digite \"0\".\n");
		scanf("%d", &voto);

		if (voto != 0) {

			switch(voto) {

				case 1 :
					can1++;
					break;

				case 2 :
					can2++;
					break;

				case 3 :
					can3++;
					break;

				case 4 :
					can4++;
					break;

				case 5 :
					nulo++;
					break;

				case 6 :
					branco++;
					break;

				default :
					printf("Número inválido.\n");

			} // Final do switch

		} // Final do if
		
	} while (voto != 0);

	// a) O total de votos para cada candidato;

	printf("\nTotal de votos de cada candidato:\n");
	printf("Bolsolula - %d votos\nKim Catacoquinho - %d votos\nPai dos pobres - %d votos\nTaokey - %d votos\n", can1, can2, can3, can4);
	
	// b) O total de votos nulos;
	
	printf("Nulo - %d votos\n", nulo);

	// c) O total de votos em branco;

	printf("Branco - %d votos\n\n", branco);

	// d) A percentagem de votos nulos sobre o total de votos;

	total = can1 + can2 + can3 + can4 + nulo + branco;

	printf("Porcentagem de votos nulos: %.2f%\n", (float)(nulo*100)/total);

	// e) A percentagem de votos em branco sobre o total de votos. Para finalizar o conjunto de votos tem-se o valor zero.

	printf("Porcentagem de votos em branco: %.2f%\n", (float)(branco*100)/total);

}




