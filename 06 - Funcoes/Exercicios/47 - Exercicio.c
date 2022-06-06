#include <stdio.h>

int QuantidadeMaior10(int* matriz, int colunas)
{
	int i, maiores_que_dez;

	maiores_que_dez = 0;
	for (i = 0; i < colunas; i++)
	{
		if (matriz[i] > 10)
		{
			maiores_que_dez++;
		}
	}

	return maiores_que_dez;
}

int main()
{
	int i, j, maiores_que_dez, matriz[4][4];

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d,%d: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}

	maiores_que_dez = QuantidadeMaior10(&matriz[0][0], 16);

	printf("Quantidade de maiores que 10: %d", maiores_que_dez);

	return 0;
}
