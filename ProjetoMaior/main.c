#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int numero1;
	int numero2;
	int numero3;
	int numero4;
	
	printf("Bem vindo ao software exibirMaior! ");
	printf("\nPor favor, digite o primeiro numero: ");
	scanf("%i", &numero1);
	
	printf("\nPor favor, digite o segundo numero: ");
	scanf("%i", &numero2);
	
	printf("\nPor favor, digite o terceiro numero: ");
	scanf("%i", &numero3);
	
	printf("\nPor favor, digite o quarto numero: ");
	scanf("%i", &numero4);
	
	if(numero1 > numero2)
	{
		if(numero1 > numero3)
		{
			if(numero1 > numero4)
			{
				printf("\nO Maior numero e: %i", numero1);	
			}
			else
			{
				printf("\nO Maior numero e: %i", numero4);				
			}
		}
		else
		{
			if(numero3 > numero4)
			{
				printf("\nO Maior numero e: %i", numero3);
			}
			else
			{
				printf("\nO Maior numero e: %i", numero4);
			}
		}
	}
	else
	{
		if(numero2 > numero3)
		{
			if(numero2 > numero4)
			{
				printf("\nO Maior numero e: %i", numero2);
			}
			else
			{
				printf("\nO Maior numero e: %i", numero4);
			}
		}
		else
		{
			if(numero3 > numero4)
			{
				printf("\nO Maior numero e: %i", numero3);
			}
			else
			{
				printf("\nO Maior numero e: %i", numero4);
			}
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
