#include <stdio.h>

int main()
{
	int i, j, maior, matricula_maior, soma, valores[5][4];
	double media;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Posicao[%d][%d]: ", i, j);
			scanf("%d", &valores[i][j]);
		}
	}

	for (i = 0; i < 5; i++)
	{
		valores[i][3] = valores[i][1] + valores[i][2];
	}

	maior = valores[0][3];
	matricula_maior = valores[0][0];
	for (i = 1; i < 5; i++)
	{
		if (valores[i][3] > maior)
		{
			maior = valores[i][3];
			matricula_maior = valores[i][0];
		}
	}

	soma = 0;
	for (i = 0; i < 5; i++)
	{
		soma += valores[i][3];
	}

	media = (double) soma / 5;

	printf("Matricula aluno que obteve maior nota: %d\n", matricula_maior);
	printf("Media das notas finais: %.2lf", media);

	return 0;
}
