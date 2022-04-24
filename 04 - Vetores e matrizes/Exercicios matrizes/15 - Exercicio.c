#include <stdio.h>

int main()
{
	int i, j, notas[5];
	char respostas[5][10], gabarito[10];

	for (i = 0; i < 5; i++)
	{
		notas[i] = 0;
	}

	for (i = 0; i < 10; i++)
	{
		printf("Gabarito questao %d: ", i+1);
		scanf(" %c", &gabarito[i]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("Aluno %d\n", i+1);
		for (j = 0; j < 10; j++)
		{
			printf("Questao %d: ", j+1);
			scanf(" %c", &respostas[i][j]);
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (respostas[i][j] == gabarito[j])
			{
				notas[i]++;
			}
		}
	}

	for (i = 0; i < 5; i++)
	{
		printf("Nota aluno %d: %d\n", i+1, notas[i]);
	}

	return 0;
}
