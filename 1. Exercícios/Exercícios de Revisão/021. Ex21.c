// 21) Faça um programa que, dado um conjunto de N números,
// determine o menor valor
// o maior valor
// e a soma dos valores.

#include <stdio.h>

void main() {

	int N, i, num, menornum, maiornum, somanum;

	printf("Digite quantos números serão inseridos no programa:\n");
	scanf("%d", &N);

	menornum = 0;
	maiornum = 0;
	somanum = 0;

	for (i = 1; i <= N; i++) {

		printf("Digite um número:\n");
		scanf("%d", &num);

		// determine o menor valor

		if (i == 1) {

			menornum = num;
		
		} else if (menornum > num) {

			menornum = num;

		}
		
		// o maior valor

		if (maiornum < num) {

			maiornum = num;
		}

		// e a soma dos valores.

		somanum = somanum + num;

	}

	printf("O menor número foi: %d\n", menornum);
	printf("O maior número foi: %d\n", maiornum);
	printf("A soma dos valores é: %d\n", somanum);

}



