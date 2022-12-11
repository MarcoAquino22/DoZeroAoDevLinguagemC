#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	float num1 = 0;
	float num2 = 0;
	float resultado = 0;
	printf("Bem vindo ao software calculadora da Nogueira!");
	printf("\npor favor, digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("\npor favor, digite o segundo numero: ");
	scanf("%f", &num2);
	resultado = num1 - num2;
	
	printf("\nA subtraçao entre os dois numeros e: %f", resultado);
	
	
	
	
	return 0;
}
