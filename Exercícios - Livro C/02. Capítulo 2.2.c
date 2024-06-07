// 2.2
// Dados dois números distintos, informe qual deles é o maior.

#include <stdio.h>

void main() {

	int num1, num2;

	printf("Digite o valor de dois números inteiros diferentes:\n");

	printf("Primeiro número:\n");
	scanf("%d", &num1);

	printf("Segundo número:\n");
	scanf("%d", &num2);

	if (num1 > num2) {

		printf("\n%d é maior que %d.", num1, num2);

	} else {

		printf("\n%d é maior que %d.", num2, num1);

	}

}
