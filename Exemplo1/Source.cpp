#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x = 0, soma = 0, idade[30] = { 0 }, c = 0; 
	float media = 0.0;
	
	for (x = 0; x < 30; x++){
		printf( "Informe a idade do aluno %d:", x + 1 );
		scanf_s( "%d", &idade[x] );
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}
		soma += idade[x];
	}

	media = (float)soma / 30;
	printf( "A média de idade dos alunos: %f\n", media );
	
	system( "pause" );
	return 0;
}

