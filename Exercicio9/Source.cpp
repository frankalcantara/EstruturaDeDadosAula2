/*
* Criar um algoritmo que, dado dois vetores de números reais de 20 posições, 
* efetue as respectivas operações indicadas por um outro vetor de 20 posições de caracteres 
* também fornecido pelo usuário, contendo as quatro operações aritméticas em 
* qualquer combinação e armazenando os resultados em um quarto vetor.
* Este programa deverá imprimir, os vetores de entrada, o vetor de operações e o vetor resultado
*/

#include <stdio.h>
#include <stdlib.h>

#define NUMERODEALUNOS 20

void main() {
	float resul[NUMERODEALUNOS] = {0.0};
	float num1[NUMERODEALUNOS] = { 0.0 }, num2[NUMERODEALUNOS] = { 0.0 };
	int x = 0, c = 0;
	char oper[NUMERODEALUNOS] = {' '};

	for (x = 0; x< NUMERODEALUNOS; x++){
		printf("Para o calculo %d, informar o primeiro operando: ", x + 1);
		scanf_s("%f", &num1[x]);
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		printf("Para o calculo %d, informar o operador (+,-,*,/): ", x + 1);
		scanf_s("%c", &oper[x]);
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		printf("Para o cálculo %d, informar o segundo operando: ", x + 1);
		scanf_s("%f", &num2[x]);
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}
		printf("\n");
	}

	for (int i = 0; i < NUMERODEALUNOS; i++) {
		switch (oper[i]) {
			case '+':	resul[i] = num1[i] + num2[i];	break;
			case '-':	resul[i] = num1[i] - num2[i];	break;
			case '*':	resul[i] = num1[i] * num2[i];	break;
			case '/':	resul[i] = num1[i] / num2[i];	break;
		}
	}

	printf("Foram digitados os seguintes valores:\n");
	//para imprimir os vetores 
	for (int i = 0; i < NUMERODEALUNOS; i++){
		printf("%0.2f \t%c\t %0.2f \t=\t %0.2f\n", num1[i], oper[i], num2[i], resul[i]);
	}

	system("pause");
}

