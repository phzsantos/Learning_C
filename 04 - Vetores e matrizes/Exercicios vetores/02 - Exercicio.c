#include <stdio.h>

int main()
{
	int valores[6], i;

	for (i = 0; i < 6; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &valores[i]);
	}

	for (i = 0; i < 6; i++)
	{
		printf("Posicao[%d]: %d\n", i, valores[i]);
	}

	return 0;
}
