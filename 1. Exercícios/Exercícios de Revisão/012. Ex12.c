// 12) Faça um programa que leia um nome de usuário e a sua senha
// não aceite a senha igual ao nome do usuário, mostrando uma mensagem de erro e voltando a pedir as informações.


#include <stdio.h>
#include <string.h>

void main() {

	char nome[30], senha[30];

	while(1) {

		printf("\nDigite o nome de usuário:\n");
		scanf("%s", nome);

		printf("Digite a senha:\n");
		scanf("%s", senha);

		if (strcmp(nome, senha) == 0) {

         printf("\nO nome de usuário e a senha não podem ser iguais!\n");

      } else {

               break;

      } // Final do if

	} // Final do while

	printf("\nRegistro feito com sucesso.\nO nome do usuário é diferente da senha.");

}

