// 1.4
// Dados uma distância e o total de litros de combustível gasto por um automóvel para percorrê-la,
// informe o consumo médio

#include <stdio.h>

void main() {

	float distancia, litros, consumoMedio;

	printf("Quantos quilômetros foram percorridos?\n");
	scanf("%f", &distancia);

	printf("Quantos litros de combustível foram gastos?\n\n");
	scanf("%f", &litros);

	consumoMedio = distancia / litros;

	printf("O consumo médio foi de %.2f", consumoMedio);

}

