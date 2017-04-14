/*
* Faça um programa que carregue um vetor de 9 elementos numéricos inteiros. 
* Calcule e imprima os números primos e suas respectivas posições dentro deste array.
*/

#include <stdlib.h>
#include <stdio.h>

void main() {
	int vet[9], x, y, flag = 0, c = 0;

	for (x = 0; x < 9; x++){
		printf( "Informar o numero %d: ", x + 1 );
		scanf_s( "%d", &vet[x]);
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}
	}
	for (x = 0; x< 9; x++){
		flag = 1;
		for (y = 2; y < vet[x]; y++)
			if (!(vet[x] % y))
			flag = 0;
		if (flag)
			printf( "O numero %d que esta no elemento %d eh primo\n", vet[x], x );
	}
	system( "pause" );
}
