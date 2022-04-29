#include <stdio.h>

int main()
{
	int i, j, k, l, linha, coluna, incluido, matriz[3][3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			matriz[i][j] = 0;
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	k = 0;
	for (l = 0; l < 9; l+=2)
	{
		do
		{
			incluido = 1;
			printf("Linha: ");
			scanf("%d", &linha);
			printf("Coluna: ");
			scanf("%d", &coluna);

			if (matriz[linha][coluna] == 0)
			{
				matriz[linha][coluna] = 1;
				incluido = 0;
			}
		}
		while (incluido);
		k++;

		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%d ", matriz[i][j]);
			}
			printf("\n");
		}

		if (k == 9 ||
		   (k >= 5 && matriz[0][0] != 0 && matriz[0][0] == matriz[0][1] && matriz[0][2] == matriz[0][0]) ||
		   (k >= 5 && matriz[1][0] != 0 && matriz[1][0] == matriz[1][1] && matriz[1][2] == matriz[1][0]) ||
		   (k >= 5 && matriz[2][0] != 0 && matriz[2][0] == matriz[2][1] && matriz[2][2] == matriz[2][0]) ||
		   (k >= 5 && matriz[0][0] != 0 && matriz[0][0] == matriz[1][0] && matriz[2][0] == matriz[0][0]) ||
		   (k >= 5 && matriz[0][1] != 0 && matriz[0][1] == matriz[1][1] && matriz[2][1] == matriz[0][1]) ||
		   (k >= 5 && matriz[0][2] != 0 && matriz[0][2] == matriz[1][2] && matriz[2][2] == matriz[0][2]) ||
		   (k >= 5 && matriz[0][0] != 0 && matriz[0][0] == matriz[1][1] && matriz[2][2] == matriz[0][0]) ||
		   (k >= 5 && matriz[0][2] != 0 && matriz[0][2] == matriz[1][1] && matriz[2][0] == matriz[0][2]))
		{
			break;
		}

		do
		{
			incluido = 1;
			printf("Linha: ");
			scanf("%d", &linha);
			printf("Coluna: ");
			scanf("%d", &coluna);

			if (matriz[linha][coluna] == 0)
			{
				matriz[linha][coluna] = 2;
				incluido = 0;
			}
		}
		while (incluido);
		k++;

		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%d ", matriz[i][j]);
			}
			printf("\n");
		}

		if (k == 9 ||
		   (k >= 5 && matriz[0][0] != 0 && matriz[0][0] == matriz[0][1] && matriz[0][2] == matriz[0][0]) ||
		   (k >= 5 && matriz[1][0] != 0 && matriz[1][0] == matriz[1][1] && matriz[1][2] == matriz[1][0]) ||
		   (k >= 5 && matriz[2][0] != 0 && matriz[2][0] == matriz[2][1] && matriz[2][2] == matriz[2][0]) ||
		   (k >= 5 && matriz[0][0] != 0 && matriz[0][0] == matriz[1][0] && matriz[2][0] == matriz[0][0]) ||
		   (k >= 5 && matriz[0][1] != 0 && matriz[0][1] == matriz[1][1] && matriz[2][1] == matriz[0][1]) ||
		   (k >= 5 && matriz[0][2] != 0 && matriz[0][2] == matriz[1][2] && matriz[2][2] == matriz[0][2]) ||
		   (k >= 5 && matriz[0][0] != 0 && matriz[0][0] == matriz[1][1] && matriz[2][2] == matriz[0][0]) ||
		   (k >= 5 && matriz[0][2] != 0 && matriz[0][2] == matriz[1][1] && matriz[2][0] == matriz[0][2]))
		{
			break;
		}
	}

	return 0;
}
