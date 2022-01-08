#include <stdio.h>

int main()
{
	int i,j, numeros[2][2];
	char nomes[3][50];

	for (i = 0; i < 3; i++)
	{
		printf("Digite um nome: ");
		gets(nomes[i]);
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", nomes[i]);
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &numeros[i][j]);
		}
	}

	printf("\n\nElementos:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Elemento [%d][%d]: %d\n", i, j, numeros[i][j]);
		}
	}

	return 0;
}
