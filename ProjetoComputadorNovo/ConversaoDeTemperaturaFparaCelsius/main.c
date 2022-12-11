#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
float F = 0;
float C = 0;  // CRIEI DUAS VARIAVEIS

printf("Software de conversao de temperatura "); //informacao ao usuario
printf("\nSoftware de fahrenheit para Celsius: ");
printf("\nPor favor, digite a temperatura em fahrenheit: ");
scanf("%f", &F);

C = (F-32)*5/9;

printf("A temperatura em Celsius e: %f", C);
	
	
	
	
	return 0;
}
