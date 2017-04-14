/*
* Faça um programa que receba a temperatura média de cada mês do ano e 
* armazene essas temperaturas em um vetor. 
* O programa deverá encontrar e imprimi a maior e a menor temperatura do ano 
* e em que mês estas temperaturas aconteceram. Sabendo que não existem dois 
* meses com a mesma temperatura.
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
	float temp[12], maior = -100, menor = 100;
	int x = 0, mes_maior = 0, mes_menor = 0, c = 0;
	char mes[12][20] = { "Janeiro" , "Fevereiro", "Março", 
			"Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", 
			"Outubro",  "Novembro",  "Dezembro" };
	
	for (x = 0; x < 12; x++) {
		printf( "Informar a temperatura de  %s: ", mes[x] );
		scanf_s( "%f", &temp[x] );
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		if (temp[x] > maior){
			maior = temp[x];
			mes_maior = x;
		}

		if (temp[x] < menor){
			menor = temp[x];
			mes_menor = x;
		}
	}
	
	printf( "A maior temperatura foi em %s\n", mes[mes_maior] );
	printf( "A menor temperatura foi em %s\n", mes[mes_menor] );
	
	system( "pause" );
}
