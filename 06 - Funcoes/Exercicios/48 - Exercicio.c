#include <stdio.h>

int SomaAcimaDiagonalPrincipal(int* matriz, int colunas)
{
	int soma_acima_diagonal_principal;

	soma_acima_diagonal_principal = matriz[1] + matriz[2] + matriz[5];

	return soma_acima_diagonal_principal;
}

int main()
{
	int i, j, soma_acima_diagonal_principal, matriz[3][3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d,%d: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}

	soma_acima_diagonal_principal = SomaAcimaDiagonalPrincipal(&matriz[0][0], 9);

	printf("Soma acima diagonal principal: %d", soma_acima_diagonal_principal);

	return 0;
}
