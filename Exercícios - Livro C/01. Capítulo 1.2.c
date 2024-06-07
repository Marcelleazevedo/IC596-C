// 1.2
// Descubra os erros no programa a seguir:

/* PERIM.C - informa o perímetro de uma circunferência /*
#include <studio.h>
#define PI = 3.1415
Main() {

	float raio;
	clrscr;
	printf("\n Qual a medida do raio? "); 		/* solicita o raio
	scanf("%f", &raio); 						da circunferência */

	float perim; 								/* calcula o seu
	perim := 2*PI*raio; 						perímetro */
	
	printf("\n O perímetro é %f", perim);
	getch;

}

// Código corrigido:
// Observação importante: alguns desses códigos são específicos do compilador Borland Turbo C

/* PERIM.C - informa o perímetro de uma circunferência */

#include <stdio.h>
#include <conio.h>
#define PI 3.1415

main() {

	float raio;
	clrscr();
	printf("\n Qual a medida do raio? "); 		/* solicita o raio da circunferência */
	scanf("%f", &raio); 					

	float perim; 								/* calcula o seu perímetro */
	perim = 2*PI*raio; 						
	
	printf("\n O perímetro é %f", perim);
	getch();

}



