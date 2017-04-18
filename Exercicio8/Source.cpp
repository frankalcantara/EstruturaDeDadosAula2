/*
* Faça um programa que receba a nota de 10 alunos e armazene essas notas em um vetor. Calcule e imprima:
*		a. a média da classe;
*		b. a quantidade de alunos aprovados, isto é, com a media >= a 7;
*		c. a quantidade de alunos reprovados, isto é, com média < 7;
*/

#include <stdio.h>
#include <stdlib.h>

#define NUMEROALUNOS 10

int main() {
	float nota[NUMEROALUNOS] = { 0.0 }, media = 0.0;
	int x = 0, apr = 0, c = 0;

	for (x = 0; x < NUMEROALUNOS; x++){
		//x+1 para não ter aluno zero
		printf("Informar a nota do aluno %d: ", x + 1);
		scanf_s("%f", &nota[x]);
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}
	}

	for (x = 0; x < NUMEROALUNOS; x++){
		media += nota[x];
		if (nota[x] >= 7)
			apr++;
	}

	printf("A media da classe foi de %0.2f\n", media / NUMEROALUNOS);
	printf("%d alunos foram aprovados\n", apr);
	printf("%d alunos foram reprovados\n", NUMEROALUNOS - apr);

	system("Pause");
}
