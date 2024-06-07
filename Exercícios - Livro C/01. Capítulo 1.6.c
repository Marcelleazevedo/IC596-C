// 1.6
// Dada uma temperatura em graus Fahrenheit, informe o valor correspondente em graus Celsius.
// [Dica C = (F - 32) * (5 / 9)].

#include <stdio.h>

void main() {

	float F, C;

	printf("Digite a temperatura em Fahrenheit:\n");
	scanf("%f", &F);

	C = (F - 32) * (5.0 / 9.0);

	printf("\n%.2fº Fahrenheit é %.2fº Celsius.", F, C);

}
