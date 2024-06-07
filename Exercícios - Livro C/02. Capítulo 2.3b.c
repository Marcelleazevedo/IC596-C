// 2.3a
// Dado um número real qualquer, informe seu valor absoluto.

#include <stdio.h>

void main() {

	float num, absoluto;

	printf("Digite um número real:\n");
	scanf("%f", &num);
	
	absoluto = num > 0 ? num:-num;

	printf("O valor absoluto de %.2f é %.2f", num, absoluto);

}