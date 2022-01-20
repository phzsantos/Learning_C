#include <stdio.h>

int main()
{
	int i;
	double notas[3], media;

	for (i = 0; i < 3; i++)
	{
		printf("Digite a %dº nota: ", i+1);
		scanf("%lf", &notas[i]);
	}

	media = (notas[0] * 2 + notas[1] * 3 + notas[2] * 5) / 3;

	if ((media > 0) && (media < 2.9))
	{
		printf("Reprovado.");
	}
	else if (media < 4.9)
	{
		printf("Recuperacao.");
	}
	else
	{
		printf("Aprovado!");
	}

	return 0;
}
