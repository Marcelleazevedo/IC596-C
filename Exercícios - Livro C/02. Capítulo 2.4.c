// 2.4
// Uma empresa determinou um reajuste salarial de 5% a todos os seus funcionários.
// Além disto, concedeu um abono de R$ 100.00 para aqueles que recebem até R$ 750.00.
// Dado o valor do salário de um funcionário, informar para quanto ele será reajustado.

#include <stdio.h>

void main() {

	float salario;

	printf("Informe o salário do funcionário:\n");
	scanf("%f", &salario);

	if (salario <= 750.0) {

		printf("\nO novo salário do funcionário é %.2f", (salario*1.05)+100);

	} else {

		printf("\nO novo salário do funcionário é %.2f", salario*1.05);

	}

}
