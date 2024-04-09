// 1) Faça um Programa que verifique se uma letra digitada é "F" ou "M".
// Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.

#include <stdio.h>

main() {

	char letra;
	
	printf("Digite a letra \"F\" para \"Feminino\" ou a letra \"M\" para \"Masculino\":\n");
	scanf("%c", &letra);

	if (letra == 'f' || letra == 'F')
		printf("Feminino");

	else if (letra == 'm' || letra == 'M')
		printf("Masculino");

	else
		printf("Sexo Inválido");

}