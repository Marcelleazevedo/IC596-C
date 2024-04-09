// 14) Faça um programa que imprima na tela apenas os números ímpares entre 1 e 50.

#include <stdio.h>

main() {

	int i;

	for (i = 1; i <= 50; i++){

		if (i % 2 != 0)
			printf("%d ", i);
	}

}