/*
* Fa�a um programa que carregue 2 vetovetR de 10 elementos num�ricos cada um. 
* O programa dever� imprimir um terceiro vetor, vetRultado da intercala��o dos
* dois vetovetR digitados de tal forma que cada elemento do vetor vetRultado esteja
* pvetRente em um dos vetovetR digitados. 
*/

#include <stdlib.h>
#include <stdio.h>

//Vamos usar um define para poder 
//trocar o comprimento dos vetovetR em 
//um �nico lugar.
#define COMPRIMENTOVETOR 5

void main() {
	int vet1[COMPRIMENTOVETOR], vet2[COMPRIMENTOVETOR], vetR[2*COMPRIMENTOVETOR];
	int j = 0, k = 0, c = 0;

	for (int i = 0; i< COMPRIMENTOVETOR; i++){
		printf( "Informar o %d valor do Vetor 1: ", i + 1 );
		scanf_s( "%d", &vet1[i]);
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}
		
		printf( "Informar o %d valor do Vetor 2: ", i + 1 );
		scanf_s( "%d", &vet2[i]);
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}
	}

	for (int i = 0; i < (2* COMPRIMENTOVETOR); i++)	{
		//testando o resultado da divis�o por dois:
		// se o resto � um ent�o � verdadeiro; 
		// se o resto � zero ent�o � falso;
		if (i%2){
			vetR[i] = vet2[j];
			j++;
		} else {
			vetR[i] = vet1[k];
			k++;
		}
	}

	printf( "\nVetor resultado:" );
	for (i = 0; i < (2 * COMPRIMENTOVETOR); i++)
		printf( "%d ", vetR[i] );

	printf( "\n" );
	system( "pause" );
}
