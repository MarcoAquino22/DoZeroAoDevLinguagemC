#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int numero1 = 0;
int numero2 = 0;
int resultado = 0;

printf("Exercicio de subtracao ");
printf("\nDigite o primeiro numero: ");
scanf("%i", &numero1);

printf("\nDigite o segundo numero: ");
scanf("%i", &numero2);

resultado = numero1 - numero2;	
	
printf("\nSubtracao entre eles e:%i", resultado);		
	
	return 0;
}
