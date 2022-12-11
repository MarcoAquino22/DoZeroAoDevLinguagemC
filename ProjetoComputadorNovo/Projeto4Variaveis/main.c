#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

// CRIEI QUATRO VARIAVEIS, TIPO_NOME,INICIALIZEI COM ZEROS	
int idade = 0;
char genero = 0;
float peso = 0;
float altura = 0;

// ATRIBUI VALORES AS VARIAVEIS
idade = 55;
genero = 'M';
peso = 99;
altura = 1.90;

// SAIDA DE DADOS NA TELA
printf("A idade e: %i\n", idade);
printf("O genero e: %c\n", genero);
printf("O peso e: %.0f\n", peso);
printf("A altura e: %.2f\n", altura);


	

	
	return 0;
}

