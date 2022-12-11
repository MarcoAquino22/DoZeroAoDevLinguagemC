#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	float notas[4];
 	float media;
 	
 	printf("software de calculo de medias escolares!");
 	printf("\nPor favor, digite uma nota: ");
 	scanf("%f", &notas[0]);
 	
 	printf("\nPor favor, digite uma nota: ");
 	scanf("%f", &notas[1]);
 	
	printf("\nPor favor, digite uma nota: ");
 	scanf("%f", &notas[2]);
 	
	printf("\nPor favor, digite uma nota: ");
 	scanf("%f", &notas[3]); 
	 
	media = (notas[0] + notas[1] + notas[2] + notas[3]) / 4;
	printf("\nA sua media foi: %.2f", media);
	if(media < 5)
	{
		printf("\nAluno Reprovado");
	}
	else
	{
		if(media < 6)
		{
			printf("\nAluno Aprovado pelo Conselho!"); 
		} 
		else if(media <=9)
		{
			printf("\nAprovado");
		}	
		else 
		{
			printf("\nAprovado com louvor!");
		}
	}
	return 0;
}
