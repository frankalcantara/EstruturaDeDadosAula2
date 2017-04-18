/*
* Faça um programa que receba as notas da primeira prova de 10 alunos 
* e armazene essas notas em um vetor. 
* Receba as notas da segunda prova de 10 alunos e armazene em outro vetor. 
* Calcule e imprima a média entre essas duas notas de cada aluno;
*/

#include <stdio.h>
#include <stdlib.h>

#define NUMERODEALUNOS 10

void main() {
	float nota1[NUMERODEALUNOS] = {0}, nota2[NUMERODEALUNOS] = { 0 };
	int x = 0, c = 0;

	for (x = 0; x < NUMERODEALUNOS; x++){
		printf("Informar a primeira nota do aluno  %d: ", x + 1);
		scanf_s("%f", &nota1[x]);
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		printf("Informar a segunda nota do aluno  %d: ", x + 1);
		scanf_s("%f", &nota2[x]);
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}
	}
	for (x = 0; x < NUMERODEALUNOS; x++)
		//mostrando a média com duas casas decimais
		printf("A media do aluno %d:\t%0.2f\n", x + 1, (nota1[x] + nota2[x]) / 2);

	system("pause");
}
