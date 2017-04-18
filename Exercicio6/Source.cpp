/*
* Faça um programa que receba a quantidade de peças vendidas por cada vendedor 
* e armazene essas quantidades em um vetor. 
* Receba também o preço da peça vendida de cada vendedor e armazene esses preços em outro vetor. 
* Existem apenas 10 vendedores, e cada vendedor pode vender apenas um tipo de peça. 
* Isto é, para cada vendedor existe apenas um preço: 
*	Calcule e imprima a quantidade total de peças vendida por cada um dos vendedores; 
*	Calcule e imprima o valor total da venda  (a quantidade de peças * o preço da peça)
*/

#include <stdlib.h>
#include <stdio.h>

#define NUMEROVENDEDORES 3

void main() {
	float preco[NUMEROVENDEDORES];
	int quant[NUMEROVENDEDORES], x, total = 0, c = 0;

	for (x = 0; x < NUMEROVENDEDORES; x++){
		printf( "Informar a quantidade de peças vendidas pelo %d vendedor\n", x + 1 );
		scanf_s( "%d", &quant[x] );
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}
		
		printf( "Informar o preço unitário das peças vendidas pelo %d vendedor\n", x + 1 );
		scanf_s( "%f", &preco[x] );
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		total += quant[x];
	}

	for (x = 0; x < NUMEROVENDEDORES; x++)
		//imprimindo o valor total das peças com duas casas decimais
		printf( "A valor total das vendas do vendedor %d foi de %0.2f\n", x + 1, quant[x] * preco[x] );

	printf( "A quantidade total de peças vendidas foi %d\n", total );
	system( "pause" );
}
