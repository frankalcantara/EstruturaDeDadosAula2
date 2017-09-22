#include <stdio.h>
#include <stdlib.h>

#define NUMEROPESSOAS 50

int main() {
	struct Dados {
		int idade;
		float peso, altura;
	};

	struct Dados pessoa[NUMEROPESSOAS] = {0};		//definindo uma instânca da struct
	int x, qtd_peso = 0, c = 0;
	float media = 0;

	for (x = 0; x<NUMEROPESSOAS; x++)
	{
		printf( "Informe a idade do %d: ", x + 1 );
		scanf_s( "%d", &pessoa[x].idade);
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		printf( "Informe a altura %d: ", x + 1 );
		scanf_s( "%f", &pessoa[x].altura);
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		printf( "Informe o peso do %d: ", x + 1 );
		scanf_s( "%f", &pessoa[x].peso );
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		media += pessoa[x].peso;
	}
	media = media / NUMEROPESSOAS;

	for (x = 0; x<NUMEROPESSOAS; x++)
		if (pessoa[x].peso > media)
			qtd_peso++;

	printf( "Numero de pessoas com peso acima da media: %d\n", qtd_peso );

	system( "pause" );
	return 0;
}
