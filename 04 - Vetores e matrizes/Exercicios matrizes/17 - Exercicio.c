#include <stdio.h>

int main()
{
	int i, j, avalicao, menor, primeira, segunda, terceira, notas[10][3];

	for (i = 0; i < 10; i++)
	{
		printf("Aluno %d\n", i+1);
		for (j = 0; j < 3; j++)
		{
			printf("Avaliacao %d: ", j+1);
			scanf("%d", &notas[i][j]);
		}
	}

	primeira = 0;
	segunda = 0;
	terceira = 0;
	for (i = 0; i < 10; i++)
	{
		if (notas[i][0] != 10 || notas[i][1] != 10 || notas[i][2] != 10)
		{
			avalicao = 0;
			menor = notas[i][0];
			for (j = 1; j < 3; j++)
			{
				if (notas[i][j] < menor)
				{
					menor = notas[i][j];
					avalicao = j;
				}
			}

			if (avalicao == 0)
			{
				primeira++;
			}
			else if (avalicao == 1)
			{
				segunda++;
			}
			else
			{
				terceira++;
			}
		}
	}

	printf("Pior nota na primeira avalicao: %d\n", primeira);
	printf("Pior nota na segunda avalicao: %d\n", segunda);
	printf("Pior nota na terceira avalicao: %d", terceira);

	return 0;
}
