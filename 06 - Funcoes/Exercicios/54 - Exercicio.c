#include <stdio.h>

int SomaMatriz(int* matriz, int linhas)
{
	int i, soma_matriz;

	soma_matriz = 0;
	for (i = 0; i < (linhas*linhas); i++)
	{
		soma_matriz += matriz[i];
	}

	return soma_matriz;
}

int main()
{
	int i, j, soma_matriz, valores[4][4];

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d,%d: ", i,j);
			scanf("%d", &valores[i][j]);
		}
	}

	soma_matriz = SomaMatriz(&valores[0][0], 4);

	printf("Soma matriz: %d", soma_matriz);

	return 0;
}
