#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

float nota1 = 0;
float nota2 = 0;
float nota3 = 0;
float nota4 =0;
float medias =0;

printf("Software de medias escolares ");
printf("\nDigite a primeira nota:");
scanf("%f", &nota1);

printf("\nDigite a segunda nota:");
scanf("%f", &nota2);

printf("\nDigite a terceira nota:");
scanf("%f", &nota3);

printf("\nDigite a quarta nota:");
scanf("%f", &nota4);

 medias = (nota1 + nota2 + nota3 + nota4)/4;

printf("\nAmedia do aluno foi: %f", medias);











	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
