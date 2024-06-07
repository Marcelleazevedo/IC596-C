// 1.7
// Dadas as medidas dos catetos de um triângulo retângulo, informe a medida da hipotenusa.
// [Dica: para calcular a raiz quadrada use a função sqrt(), definida no arquivo math.h].

#include <stdio.h>
#include <math.h>

void main() {

	float a, b, c;

	printf("Digite a medida do cateto a:\n");
	scanf("%f", &a);

	printf("Digite a medida do cateto b:\n");
	scanf("%f", &b);

	c = sqrt(a*a + b*b);

	printf("\nA medida da hipotenusa do triângulo retângulo é %.2f\n", c);

}
