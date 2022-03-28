#include <stdio.h>

int main()
{
	int i, vetor_a[10], vetor_b[10], vetor_c[10];

	for (i = 0; i < 10; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &vetor_a[i]);
	}

	for (i = 0; i < 10; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &vetor_b[i]);
	}

	for (i = 0; i < 10; i++)
	{
		vetor_c[i] = vetor_a[i] - vetor_b[i];
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", vetor_c[i]);
	}

	return 0;
}
