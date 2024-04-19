// 2) Faça um Programa que verifique se uma letra digitada é vogal ou consoante.

#include <stdio.h>

void main() {

	char letra;

	printf("Digite uma letra:\n");
	scanf("%c", &letra);

	if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U')
		printf("A letra digitada é uma vogal.");
	
	else
		printf("A letra digitada é uma consoante");

}