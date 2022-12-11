#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	
int  numero1 = 0;
int  numero2 = 0;
int  numero3 = 0;
int  numero4 = 0;
int  numero5 = 0;
int resultado = 0;

printf("Software de Multiplicacao ");
printf("\nPor favor digite o Primeiro numero: ");
scanf("%i", &numero1);
printf("\nPor favor digite o Segundo numero: ");
scanf("%i", &numero2);
printf("\nPor favor digite o Terceiro numero: ");
scanf("%i", &numero3);
printf("\nPor favor digite o Quarto numero: ");
scanf("%i", &numero4);
printf("\nPor favor digite o Quinto numero: ");
scanf("%i", &numero5);

resultado = numero1 * numero2 * numero3 * numero4 * numero5;
printf("O resultado da Mulitplicacao e: %i", resultado);
	return 0;
}
