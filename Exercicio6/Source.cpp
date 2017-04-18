/*
* Fa�a um programa que receba a quantidade de pe�as vendidas por cada vendedor 
* e armazene essas quantidades em um vetor. 
* Receba tamb�m o pre�o da pe�a vendida de cada vendedor e armazene esses pre�os em outro vetor. 
* Existem apenas 10 vendedores, e cada vendedor pode vender apenas um tipo de pe�a. 
* Isto �, para cada vendedor existe apenas um pre�o: 
*	Calcule e imprima a quantidade total de pe�as vendida por cada um dos vendedores; 
*	Calcule e imprima o valor total da venda  (a quantidade de pe�as * o pre�o da pe�a)
*/

#include <stdlib.h>
#include <stdio.h>

#define NUMEROVENDEDORES 3

void main() {
	float preco[NUMEROVENDEDORES];
	int quant[NUMEROVENDEDORES], x, total = 0, c = 0;

	for (x = 0; x < NUMEROVENDEDORES; x++){
		printf( "Informar a quantidade de pe�as vendidas pelo %d vendedor\n", x + 1 );
		scanf_s( "%d", &quant[x] );
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}
		
		printf( "Informar o pre�o unit�rio das pe�as vendidas pelo %d vendedor\n", x + 1 );
		scanf_s( "%f", &preco[x] );
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		total += quant[x];
	}

	for (x = 0; x < NUMEROVENDEDORES; x++)
		//imprimindo o valor total das pe�as com duas casas decimais
		printf( "A valor total das vendas do vendedor %d foi de %0.2f\n", x + 1, quant[x] * preco[x] );

	printf( "A quantidade total de pe�as vendidas foi %d\n", total );
	system( "pause" );
}
