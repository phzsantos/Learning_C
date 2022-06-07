#include <stdio.h>

int SomaDiagonalPrincipal(int matriz[][3], int linhas)
{
	int i, soma_diagonal_principal;

	soma_diagonal_principal = 0;
	for (i = 0; i < 3; i++)
	{
		soma_diagonal_principal += matriz[i][i];
	}

	return soma_diagonal_principal;
}

int main()
{
	int i, j, soma_diagonal_principal, matriz[3][3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d,%d: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}

	soma_diagonal_principal = SomaDiagonalPrincipal(matriz, 3);

	printf("Soma diagonal principal: %d", soma_diagonal_principal);

	return 0;
}
