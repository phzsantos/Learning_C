#include <stdio.h>

int main()
{
	int i, j, opcao;
	double constante, A[2][2], B[2][2], C[2][2];

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Posicao[%d][%d]: ", i, j);
			scanf("%lf", &A[i][j]);
		}
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Posicao[%d][%d]: ", i, j);
			scanf("%lf", &B[i][j]);
		}
	}

	printf("Opcoes:\n");
	printf("1 - Somar as matrizes\n");
	printf("2 - Subtrair a primeira matriz na segunda\n");
	printf("3 - Adicionar uma constante as duas matrizes\n");
	printf("4 - Imprimir as matrizes\n");
	printf("Opcao: ");
	scanf("%d", &opcao);

	if (opcao == 1)
	{
		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 2; j++)
			{
				C[i][j] = A[i][j] + B[i][j];
			}
		}

		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 2; j++)
			{
				printf("%.2lf ", C[i][j]);
			}
			printf("\n");
		}
	}
	else if (opcao == 2)
	{
		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 2; j++)
			{
				C[i][j] = A[i][j] - B[i][j];
			}
		}

		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 2; j++)
			{
				printf("%.2lf ", C[i][j]);
			}
			printf("\n");
		}
	}
	else if (opcao == 3)
	{
		printf("Constante: ");
		scanf("%lf", &constante);

		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 2; j++)
			{
				A[i][j] += constante;
			}
		}

		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 2; j++)
			{
				B[i][j] += constante;
			}
		}

		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 2; j++)
			{
				printf("%.2lf ", A[i][j]);
			}
			printf("\n");
		}

		printf("\n");
		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 2; j++)
			{
				printf("%.2lf ", B[i][j]);
			}
			printf("\n");
		}
	}
	else if (opcao == 4)
	{
		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 2; j++)
			{
				printf("%.2lf ", A[i][j]);
			}
			printf("\n");
		}

		printf("\n");
		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 2; j++)
			{
				printf("%.2lf ", B[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Opcao inexistente.");
	}

	return 0;
}
