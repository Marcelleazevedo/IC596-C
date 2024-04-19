// 6) As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe contraram para desenvolver o programa que calculará os reajustes.
// Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:

// a) salários até R$ 280,00 (incluindo): aumento de 20%
// b) salários entre R$ 280,00 e R$ 700,00: aumento de 15%
// c) salários entre R$ 700,00 e R$ 1500,00: aumento de 10%
// d) salários de R$ 1500,00 em diante: aumento de 5%

// Após o aumento ser realizado, informe na tela:
// a) o salário antes do reajuste;
// b) o percentual de aumento aplicado;
// c) o valor do aumento;
// d) o novo salário, após o aumento.

#include <stdio.h>

void main(){

	float salario, novosalario;
	int porcentagem;

	printf("Digite o salário do colaborador: \n");
	scanf("%f", &salario);

	// a) salários até R$ 280,00 (incluindo): aumento de 20%

	if (salario < 280) {
		novosalario = salario * 1.2;
		porcentagem = 20;
	}

	// b) salários entre R$ 280,00 e R$ 700,00: aumento de 15%

	else if (salario == 280 || salario < 700) {
		novosalario = salario * 1.15;
		porcentagem = 15;
	}

	// c) salários entre R$ 700,00 e R$ 1500,00: aumento de 10%

		else if (salario == 700 || salario < 1500) {
		novosalario = salario * 1.10;
		porcentagem = 10;
	}

	// d) salários de R$ 1500,00 em diante: aumento de 5%

		else {
		novosalario = salario * 1.05;
		porcentagem = 5;
	}

	// Após o aumento ser realizado, informe na tela:

	// a) o salário antes do reajuste;

	printf("O salário antes do reajuste era %.2f\n", salario);

	// b) o percentual de aumento aplicado;

	printf("O aumento do salário foi de %d por cento.\n", porcentagem);

	// c) o valor do aumento;

	printf("O valor do aumento foi de %.2f reais.\n", novosalario-salario);

	// d) o novo salário, após o aumento.

	printf("O valor do novo salário é %.2f.\n", novosalario);
}

