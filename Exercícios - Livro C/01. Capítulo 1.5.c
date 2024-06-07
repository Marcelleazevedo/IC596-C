// 1.5
// Dado um caracter, informe o seu código Ascii em octal, decimal e hexadecimal

#include <stdio.h>

void main() {

    char caracter;

    printf("Digite um caracter:\n");
    scanf("%c", &caracter);

    printf("\nO código ASCII de '%c' é:\n", caracter);
    printf("Octal: %o\n", caracter);
    printf("Decimal: %d\n", caracter);
    printf("Hexadecimal: 0x%X\n", caracter);

}