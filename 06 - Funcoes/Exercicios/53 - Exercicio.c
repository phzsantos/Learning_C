#include <stdio.h>

int MatrizIdentidade(int* matriz, int linhas)
{
	int i, j, k, identidade, matriz_interna[linhas][linhas];

	k = 0;
	for (i = 0; i < linhas; i++)
	{
		for (j = 0; j < linhas; j++)
		{
			matriz_interna[i][j] = matriz[k];
			k++;
		}
	}

	identidade = 1;
	for (i = 0; i < linhas; i++)
	{
		for (j = 0; j < linhas; j++)
		{
			if (i == j)
			{
				if (matriz_interna[i][j] != 1)
				{
					identidade = 0;
				}
			}
			else
			{
				if (matriz_interna[i][j] != 0)
				{
					identidade = 0;
				}
			}
		}
	}

	return identidade;
}

int main()
{
	int i, j, n, identidade;

	printf("Tamanho da matriz quadrada: ");
	scanf("%d", &n);

	int matriz[n][n];

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d,%d: ", i,j);
			scanf("%d", &matriz[i][j]);
		}
	}

	identidade = MatrizIdentidade(&matriz[0][0], n);

	if (identidade)
	{
		printf("E identidade");
	}
	else
	{
		printf("Nao e identidade");
	}

	return 0;
}
