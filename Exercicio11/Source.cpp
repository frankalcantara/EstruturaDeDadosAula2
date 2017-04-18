/*
* Fa�a um programa que receba o estoque atual de 4 produtos (colunas) 
* que est�o armazenados em 4 armaz�ns (linhas) e coloque estes dados em uma matriz 5x4. 
* Sendo que a �ltima linha da matriz cont�m o custo de cada produto, calcule e imprima:
*		a.	a quantidade de itens armazenados em cada armaz�m;
*		b.	qual armaz�m possui maior estoque do produto 2;
*		c.	qual armaz�m possui menor estoque do produto 4;
*		d.	qual o custo total de cada produto;
*		e.	qual o custo total de cada armaz�m;
* Observe, por favor, que todos os n�meros armazenados ser�o inteiros.
* Observe tamb�m que, casos os pre�os ou totais sejam iguais, voc� s� precisar� 
* mostrar um deles como resultado para os itens a, b;
*/

#include <stdio.h>
#include <stdlib.h>

#define NUMEROARMAZEM 5
#define NUMEROPRODUTOS 4

void main() {
	int mat[NUMEROARMAZEM][NUMEROPRODUTOS], c, soma, armazem = 0, maior2 = 0, menor4 = 999999, arma_maior, arma_menor;

	//n�o vamos preencher a �ltima linha j� que esta est� reservada para 
	//pre�os
	for (int i = 0; i < NUMEROARMAZEM-1; i++)
		for (int j = 0; j < NUMEROPRODUTOS; j++){
			printf("Informe o estoque do  produTo %d produto no armazem %d:", i + 1, j + 1);
			scanf_s("%d", &mat[i][j]);
			//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
			while ((c = getchar()) != '\n' && c != EOF) {}
		}
	//agora vamos preencher a �ltima linha, contendo os pre�os
	//a �ltima linha � NUMEROARMAZEM - 1
	for (int j = 0; j <NUMEROPRODUTOS; j++){
		printf("Informe o preco do produto %d:", j + 1);
		//O pre�o ser� colocado na �ltima linha como a contagem de array come�a em zero
		//a �ltima linha � a linha NUMEROARMAZEM - 1
		scanf_s("%d", &mat[NUMEROARMAZEM - 1][j]);
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}
	}

	printf("\n");
	//para mostrar a quantidade de itens em cada armazem
	//lembrando que a �ltima linha � de pre�os e n�o quantidades
	for (int i = 0; i < NUMEROARMAZEM-1; i++){
		soma = 0;
		
		for (int j = 0; j <NUMEROPRODUTOS; j++)
			soma += mat[i][j];
		
		printf("O armazem  %d possui %d itens\n ", i + 1, soma);
	}
	
	printf("\n");
	//para mostrar o maior estoque do produto 2;
	for (int i = 0; i < NUMEROARMAZEM - 1; i++) {
		//lembre o produto dois est� no index 1, coluna 1
		if (mat[i][2] > maior2){
				armazem = i;
			}
		}
	printf("O armazem %d possui o maior estoque do produto 2\n", armazem);
	
	printf("\n");
	//para mostrar o menor estoque do produto 4;
	for (int i = 0; i < NUMEROARMAZEM - 1; i++) {
		//lembre o produto dois est� no index 3, coluna 3
		if (mat[i][3] < menor4) {
			armazem = i;
		}
	}
 	printf("O armazem  %d possui o menor estoque do produto 4\n", armazem);

	printf("\n");
	//para calcular o custo total de cada produto
	//precisamos somar o estoque de cada um em cada armazem
	//e multiplicar pelo pre�o que est� na linha NUMEROARMAZEM -1
	for (int j = 0; j < NUMEROARMAZEM - 1; j++){
		soma = 0;
		for (int i = 0; i < NUMEROPRODUTOS; i++)
			soma += mat[i][j];
		printf("O custo total do produto %d: %d\n ", j + 1, soma*mat[NUMEROARMAZEM-1][j]);
	}

	printf("\n");
	//para calcular o custo total por armaz�m...
	for (int i = 0; i< NUMEROPRODUTOS; i++){
		soma = 0;
		for (int j = 0; j<NUMEROARMAZEM -1; j++)
			soma += mat[i][j] * mat[NUMEROARMAZEM-1][j];
		printf("O custo total do armazem %d: %d\n", i + 1, soma);
	}

	system("pause");
}
