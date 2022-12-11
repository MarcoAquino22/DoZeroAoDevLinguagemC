#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int numeros[4];
	int i;
	
	for(i = 0; i < 4; i++)
	{
		printf("\nPor favor, digite um numero: ");
	    scanf("%i", &numeros[i]);
	}
	
	int maior = numeros[0];
	
	for(i = 0; i < 4; i++)
	{
		if(maior < numeros[i]) // 0 1 2 3 4
		{
			maior = numeros[i];
		}
	}
	
	printf("\nO maior numero e: %i", maior);
	return 0;
}
