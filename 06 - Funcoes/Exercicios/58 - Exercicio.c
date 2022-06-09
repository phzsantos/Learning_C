#include <stdio.h>

void ProdutoMatrizes(int* matriz1, int* matriz2, int* produto,int* linhas)
{
	int i, j, k, l, auxiliar, matriz_interna[(*linhas)][(*linhas)], matriz_interna2[(*linhas)][(*linhas)];

	k = 0;
	for (i = 0; i < (*linhas); i++)
	{
		for (j = 0; j < (*linhas); j++)
		{
			matriz_interna[i][j] = matriz1[k];
			k++;
		}
	}

	k = 0;
	for (i = 0; i < (*linhas); i++)
	{
		for (j = 0; j < (*linhas); j++)
		{
			matriz_interna2[i][j] = matriz2[k];
			k++;
		}
	}

	k = 0;
	for (i = 0; i < (*linhas); i++)
	{
		for (j = 0; j < (*linhas); j++)
		{
			auxiliar = 0;
			for (l = 0; l < (*linhas); l++)
			{
				auxiliar += matriz_interna[i][l] * matriz_interna2[l][j];
			}

			produto[k] = auxiliar;
			k++;
		}
	}
}

int main()
{
	int i, j, tamanho;

	printf("Tamanho das matrizes: ");
	scanf("%d", &tamanho);

	int valores[tamanho][tamanho], valores2[tamanho][tamanho], produto[tamanho][tamanho];

	for (i = 0; i < tamanho; i++)
	{
		for (j = 0; j < tamanho; j++)
		{
			printf("%d,%d: ", i,j);
			scanf("%d", &valores[i][j]);
		}
	}

	for (i = 0; i < tamanho; i++)
	{
		for (j = 0; j < tamanho; j++)
		{
			printf("%d,%d: ", i,j);
			scanf("%d", &valores2[i][j]);
		}
	}

	ProdutoMatrizes(&valores[0][0], &valores2[0][0], &produto[0][0], &tamanho);

	printf("Produto:\n");
	for (i = 0; i < tamanho; i++)
	{
		for (j = 0; j < tamanho; j++)
		{
			printf("%d ", produto[i][j]);
		}
		printf("\n");
	}

	return 0;
}
