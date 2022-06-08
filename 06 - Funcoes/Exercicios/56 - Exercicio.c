#include <stdio.h>

int SomaLinha(int matriz[][6], int* linha)
{
	int i, soma_linha;

	soma_linha = 0;
	for (i = 0; i < 6; i++)
	{
		soma_linha += matriz[(*linha)][i];
	}

	return soma_linha;
}

int main()
{
	int i, j, soma_linha, linha, valores[7][6];

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%d,%d: ", i,j);
			scanf("%d", &valores[i][j]);
		}
	}

	printf("Linha a ser somada: ");
	scanf("%d", &linha);

	soma_linha = SomaLinha(valores, &linha);

	printf("Soma da linha %d: %d", linha, soma_linha);

	return 0;
}
