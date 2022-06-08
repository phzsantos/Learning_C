#include <stdio.h>

void SomaDiagonaisMatriz(int matriz[][3], int* soma_diagonal_principal, int* soma_diagonal_secundaria)
{
	int i, j;

	(*soma_diagonal_principal) = 0;
	(*soma_diagonal_secundaria) = 0;

	for (i = 0; i < 3; i++)
	{
		(*soma_diagonal_principal) += matriz[i][i];
	}

	j = 0;
	for (i = 2; i >= 0; i--)
	{
		(*soma_diagonal_secundaria) += matriz[j][i];
		j++;
	}
}

int main()
{
	int i, j, soma_diagonal_principal, soma_diagonal_secundaria, valores[3][3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d,%d: ", i,j);
			scanf("%d", &valores[i][j]);
		}
	}

	SomaDiagonaisMatriz(valores, &soma_diagonal_principal, &soma_diagonal_secundaria);

	printf("Soma diagonal principal: %d\n", soma_diagonal_principal);
	printf("Soma diagonal secundaria: %d", soma_diagonal_secundaria);

	return 0;
}
