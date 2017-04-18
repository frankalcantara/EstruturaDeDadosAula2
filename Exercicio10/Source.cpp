/*
* Faça um programa que carregue valores inteiros positivos em uma matriz 3x3 
* e imprima o maior elemento dessa matriz.
*/

#include <stdio.h>
#include <stdlib.h>

#define NUMEROLINHAS 3
#define NUMEROCOLUNAS 3

void main() {
	int mat[NUMEROLINHAS][NUMEROCOLUNAS] = { {0}, {0} }; 
	int c = 0, maior = 0;

	for (int i = 0; i < NUMEROLINHAS; i++)
		for (int j = 0; j < NUMEROCOLUNAS; j++)
		{
			printf("Informe o valor do elemento [%d][%d]:", i, j);
			scanf_s("%d", &mat[i][j]);
			//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
			while ((c = getchar()) != '\n' && c != EOF) {}
			printf("\n");
		}

	for (int i = 0; i < NUMEROLINHAS; i++)
		for (int j = 0; j < NUMEROCOLUNAS; j++)
			if (mat[i][j] > maior)
				maior = mat[i][j];

	printf("O maior elemento da matriz: %d\n", maior);

	system("pause");
}
