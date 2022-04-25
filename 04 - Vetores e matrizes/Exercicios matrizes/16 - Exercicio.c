#include <stdio.h>

int main()
{
	int i, j, notas[3], matricula[3];
	char respostas[3][10], gabarito[10], percentual;

	for (i = 0; i < 3; i++)
	{
		notas[i] = 0;
	}

	for (i = 0; i < 10; i++)
	{
		printf("Gabarito questao %d: ", i+1);
		scanf(" %c", &gabarito[i]);
	}

	for (i = 0; i < 3; i++)
	{
		printf("Aluno: ");
		scanf("%d", &matricula[i]);
		for (j = 0; j < 10; j++)
		{
			printf("Questao %d: ", j+1);
			scanf(" %c", &respostas[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (respostas[i][j] == gabarito[j])
			{
				notas[i]++;
			}
		}
	}

	for (i = 0; i < 3; i++)
	{
		percentual = notas[i] * 100 / 10;
		printf("Nota aluno %d: %d, %d%%\n", matricula[i], notas[i], percentual);
	}

	return 0;
}
