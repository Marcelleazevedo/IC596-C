// 30) Uma academia deseja fazer um senso entre seus clientes para descobrir:
// o mais alto
// o mais baixo
// o mais gordo
// e o mais magro

// para isto você deve fazer um programa que pergunte a cada um dos clientes da academia:
//  seu código
// sua altura
// e seu peso.

// A digitação de dados termina quando o usuário digitar 0 (zero) no campo código.

// Ao encerrar o programa também deverão ser informados:
// os códigos e valores do cliente mais alto do mais baixo
// do mais gordo e do mais magro
// além da média das alturas e dos pesos dos clientes


#include <stdio.h>

main(){

	int codigo, codigoAlto, codigoBaixo, codigoGordo, codigoMagro, contador;
	float peso, altura, maisAlto, maisBaixo, maisGordo, maisMagro, somaAltura, somaPeso;

	maisAlto = 0;
	maisBaixo = 5; // 5 metros de altura
	maisGordo = 0;
	maisMagro = 800; // 800 quilos

	codigo = 1;

	while (codigo !=0) { // Início da estrutura while

		//  seu código
		
		printf("Digite o código do aluno:\n(Digite 0 para encerrar o programa)\n");
		scanf("%d", &codigo);

		if (codigo == 0) {

			break;
		}

		// sua altura

		printf("Digite a sua altura em metros:\nExemplo:1.70\n");
		scanf("%f", &altura);

		somaAltura += altura;

		// e seu peso.

		printf("Digite o seu peso em quilos:\nExemplo: 65.8\n");
		scanf("%f", &peso);

		somaPeso += peso;

		contador++;

		// o mais alto

		if (altura > maisAlto) {

			maisAlto = altura;
			codigoAlto = codigo;
		}

		// o mais baixo

		if (altura < maisBaixo) {

			maisBaixo = altura;
			codigoBaixo = codigo;
		}

		// o mais gordo

		if (peso > maisGordo) {

			maisGordo = peso;
			codigoGordo = codigo;

		}

		// e o mais magro

		if (peso < maisMagro) {

			maisMagro = peso;
			codigoMagro = codigo;

		}


	} // final da estrutura while

	// Ao encerrar o programa também deverão ser informados:
	// os códigos e valores do cliente mais alto do mais baixo

	printf("Altura do cliente mais alto: %.2f\nCódigo do cliente mais alto:%d\n", maisAlto, codigoAlto);

	printf("Altura do cliente mais baixo: %.2f\nCódigo do cliente mais baixo:%d\n", maisBaixo, codigoBaixo);

	printf("\n");

	// do mais gordo e do mais magro
	
	printf("Altura do cliente mais gordo: %.2f\nCódigo do cliente mais alto:%d\n", maisGordo, codigoGordo);

	printf("Altura do cliente mais magro: %.2f\nCódigo do cliente mais magro:%d\n", maisMagro, codigoMagro);

	printf("\n");

	// além da média das alturas e dos pesos dos clientes

	printf("A média da altura dos clientes é de: %.2f\n", somaAltura/contador);
	printf("A média do peso dos clientes é de: %.2f\n", somaPeso/contador);


}
