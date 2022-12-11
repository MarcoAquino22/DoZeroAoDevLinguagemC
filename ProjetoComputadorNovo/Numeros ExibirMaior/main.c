#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int numero[4];
int maior;

printf("Bem vindo ao software exibir maior numero ");
printf("\nDigite o primeiro numero: "),
scanf("%i", &numero[0]);
printf("\nDigite o segundo numero: "),
scanf("%i", &numero[1]);
printf("\nDigite o terceiro numero: ");
scanf("%i", &numero[2]);
printf("\nDigite o quarto numero: ");
scanf("%i", &numero[3]);
int i;

for(i = 0; i < 4; i++)
{
	
if(maior < numero[i])

{
  maior = numero[i];
  	
	}	
		
}
printf("\n O maior numero e: %i", maior);	
			
	return 0;
}
