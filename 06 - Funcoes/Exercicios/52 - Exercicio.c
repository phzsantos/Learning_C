#include <stdio.h>

void TranspostaMatriz(int* matriz, int* transposta, int linhas)
{
	int i, j, k, matriz_interna[linhas][linhas], transposta_interna[linhas][linhas];

	k = 0;
	for (i = 0; i < linhas; i++)
	{
		for (j = 0; j < linhas; j++)
		{
			matriz_interna[i][j] = matriz[k];
			k++;
		}
	}

	for (i = 0; i < linhas; i++)
	{
		for (j = 0; j < linhas; j++)
		{
			transposta_interna[i][j] = matriz_interna[j][i];
		}
	}

	k = 0;
	for (i = 0; i < linhas; i++)
	{
		for (j = 0; j < linhas; j++)
		{
			transposta[k] = transposta_interna[i][j];
			k++;
		}
	}
}

int main()
{
	int i, j, n;

	printf("Tamanho da matriz quadrada: ");
	scanf("%d", &n);

	int matriz[n][n], transposta[n][n];

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d,%d: ", i,j);
			scanf("%d", &matriz[i][j]);
		}
	}

	TranspostaMatriz(&matriz[0][0], &transposta[0][0], n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", transposta[i][j]);
		}
		printf("\n");
	}

	return 0;
}
