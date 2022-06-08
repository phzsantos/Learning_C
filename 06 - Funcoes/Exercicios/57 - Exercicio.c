#include <stdio.h>

int SomaColuna(int matriz[][6], int* coluna)
{
	int i, soma_coluna;

	soma_coluna = 0;
	for (i = 0; i < 7; i++)
	{
		soma_coluna += matriz[i][(*coluna)];
	}

	return soma_coluna;
}

int main()
{
	int i, j, soma_coluna, coluna, valores[7][6];

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%d,%d: ", i,j);
			scanf("%d", &valores[i][j]);
		}
	}

	printf("Coluna a ser somada: ");
	scanf("%d", &coluna);

	soma_coluna = SomaColuna(valores, &coluna);

	printf("Soma da linha %d: %d", coluna, soma_coluna);

	return 0;
}
