/*
* Elaborar um programa que leia, some e imprima o 
* resultado da soma entre dois vetores inteiros de 50 posições,
* somando cada um dos itens do vetor a com cada um dos itens do vetor b.
*/

#include <stdio.h>
#include <stdlib.h>

#define NUMEROPOSICOES 3

int main() {
	int vet1[NUMEROPOSICOES] = { 0 }, vet2[NUMEROPOSICOES] = { 0 }, x = 0, c = 0;

	for (x = 0; x < NUMEROPOSICOES; x++)
	{
		printf( "Informar o valor %d do Vetor 1: ", x + 1 );
		scanf_s( "%d", &vet1[x]);
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}
		
		printf( "Informar o valor %d do Vetor 2: ", x + 1 );
		scanf_s( "%d", &vet2[x]);
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}
	}
	for (x = 0; x< NUMEROPOSICOES; x++)
		printf( "O valor da soma dos elementos %d dos vetores: %d \n", x, vet1[x] + vet2[x] );

	system( "pause" );
	return 0;
}

