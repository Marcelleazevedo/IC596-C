// 38) Em uma competição de salto em distância cada atleta tem direito a cinco saltos.
// O resultado do atleta será determinado pela média dos cinco valores restantes.
// Você deve fazer um programa que receba o nome e as cinco distâncias alcançadas pelo atleta em seus saltos
// e depois informe o nome, os saltos e a média dos saltos.
// O programa deve ser encerrado quando não for informado o nome do atleta.

// A saída do programa deve ser EXATAMENTE, com a mesma formatação, do exemplo abaixo:

// Atleta: Gabriel Barbosa Gabigol
//         Primeiro Salto: 6.5 m
//         Segundo Salto: 6.1 m
//         Terceiro Salto: 6.2 m
//         Quarto Salto: 5.4 m
//         Quinto Salto: 5.3 m
//         
//         Resultado final:
//                Atleta: Gabriel Barbosa Gabigol
//                Saltos: 6.5 - 6.1 - 6.2 - 5.4 - 5.3
//                Média dos saltos: 5.9 m

#include <stdio.h>
#include <string.h>

void main() {

	int i;
	char nome[40];
	float saltos[5];


	while(1) {

	printf("Digite enter para encerrar o programa.\n");
	printf("Digite o nome do atleta:\n");
	fgets(nome, 40, stdin);

	if (strlen(nome) == 1) {

		break;

	}

	for (i = 0; i <= 4; i++) {

		printf("Digite a distância em metros do %dº salto:\n", i+1);
		scanf("%f", &saltos[i]);

	} // fim do for

	printf("Resultado Final:\n");
	printf("       Atleta: %s\n", nome);
	printf("       Saltos: %.2f - %.2f - %.2f - %.2f - %.2f\n", saltos[1], saltos[2], saltos[3], saltos[4], saltos[5]);
	printf("       Média dos saltos: %f m", (saltos[1] + saltos[2] + saltos[3] + saltos[4] + saltos[5]) / 5);

	} // Fim do While

	
}

