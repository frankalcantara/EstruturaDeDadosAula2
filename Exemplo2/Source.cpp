#include <stdio.h>
#include <stdlib.h>

//para poder testar o código vamos usar duas 
//macros, de forma que possamos ajustar os números 
//no mesmo lugar
#define NUMEROTURMAS 10
#define NUMEROALUNOS 30

int main() {
	int x, y, idade[NUMEROTURMAS][NUMEROALUNOS] = { {0}, {0} };
	int soma[NUMEROTURMAS] = { 0 }, c = 0;;
	float media = 0.0;

	for (y = 0; y < NUMEROTURMAS; y++) {
		for (x = 0; x < NUMEROALUNOS; x++) {
			printf( "Informe a idade do  aluno %d da turma %d:", x + 1, y + 1 );
			scanf_s( "%d", &idade[y][x] );
			//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
			while ((c = getchar()) != '\n' && c != EOF) {}
			soma[y] += idade[y][x];
		}
	}

	for (y = 0; y < NUMEROTURMAS; y++) {
		media = (float)soma[y] / NUMEROALUNOS;
		//Vamos imprimir a média com duas casas decimais
		printf( "A média de idade dos alunos da turma %d é %0.2f:\n", y + 1, media );
	}

	system( "pause" );
	return 0;

}
