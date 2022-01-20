#include <stdio.h>

int main()
{
	int i;
	double media, notas[3];

	for (i = 0; i < 3; i++)
	{
		printf("Digite a %dº nota: ", i+1);
		scanf("%lf", &notas[i]);
	}

	media = (notas[0] + notas[1] + notas[2] * 2) / 3;

	if (media >= 60)
	{
		printf("Aprovado!");
	}
	else
	{
		printf("Reprovado.");
	}

	return 0;
}
