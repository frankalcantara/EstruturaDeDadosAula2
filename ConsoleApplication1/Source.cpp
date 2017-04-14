/*
* Faça um programa que carregue 1 vetor de 6 elementos numéricos inteiros.
* Calcule e imprima a quantidade de números pares e impares digitados pelo usuário.
*/

#include <stdlib.h>
#include <stdio.h>

void main() {
	int vet[6], x, par = 0, c = 0;

	for (x = 0; x< 6; x++) {

		printf( "Informar o valor %d: ", x + 1 );
		scanf_s( "%d", &vet[x]);
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}
	}
	for (x = 0; x< 6; x++)
		if ((vet[x] % 2) == 0 )
			par++;

	printf( "A quantidade de numeros pares: %d\n", par );
	printf( "A quantidade de numeros impares: %d\n", 6 - par );

	system( "Pause" );
}
