// 24) Faça um programa que peça para n pessoas a sua idade,
// ao final o programa deverá verificar se a média de idade da turma varia entre 0 e 25, 26 e 60 ou maior que 60;
// e então, dizer se a turma é jovem, adulta ou idosa, conforme a média calculada.

#include <stdio.h>

main() {

	int num, i, idade, soma;
	float media;

	printf("O programa irá calcular a idade de quantas pessoas?\n");
	scanf("%d", &num);

	soma = 0;

	for (i = 1; i <= num; i++) {

		printf("Digite a idade da pessoa %d\n", i);
		scanf("%d", &idade);

		soma = soma + idade;

	}

	media = soma / num;

	// 0 e 25 - jovem
	// 26 e 60 - adulta
	// maior que 60 - idosa

	if (media == 0 || media <= 25) {

		printf("A média de idade das pessoas da turma é de %.2f, elas são jovens.\n", media);

	}  else if (media == 26 || media <= 60) {

		printf("A média de idade das pessoas da turma é de %.2f, elas são adultas.\n", media);

	} else

		printf("A média de idade das pessoas da turma é de %.2f, elas são velhas.\n", media);

}

