#include <stdio.h>

int SomaAbaixoDiagonalPrincipal(int matriz[][3], int linhas)
{
	int i, j, soma_abaixo_diagonal_principal;

	soma_abaixo_diagonal_principal = 0;
	for (i = 0; i < linhas; i++)
	{
		for (j = 0; j < i; j++)
		{
			soma_abaixo_diagonal_principal += matriz[i][j];
		}
	}

	return soma_abaixo_diagonal_principal;
}

int main()
{
	int i, j, soma_abaixo_diagonal_principal, matriz[3][3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d,%d: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}

	soma_abaixo_diagonal_principal = SomaAbaixoDiagonalPrincipal(matriz, 3);

	printf("Soma abaixo diagonal principal: %d", soma_abaixo_diagonal_principal);

	return 0;
}
