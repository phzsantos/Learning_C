#include <stdio.h>

int SomaDiagonalSecundaria(int matriz[][3], int linhas)
{
	int i, j, soma_diagonal_secundaria;

	j = 0;
	soma_diagonal_secundaria = 0;
	for (i = 2; i >= 0; i--)
	{
		soma_diagonal_secundaria += matriz[j][i];
		j++;
	}

	return soma_diagonal_secundaria;
}

int main()
{
	int i, j, soma_diagonal_secundaria, matriz[3][3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d,%d: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}

	soma_diagonal_secundaria = SomaDiagonalSecundaria(matriz, 3);

	printf("Soma diagonal secundaria: %d", soma_diagonal_secundaria);

	return 0;
}
