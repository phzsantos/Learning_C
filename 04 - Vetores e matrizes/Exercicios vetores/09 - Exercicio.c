#include <stdio.h>

int main()
{
	int valores[6], i;

	for (i = 0; i < 6; i++)
	{
		do
		{
			printf("Posicao[%d]: ", i);
			scanf("%d", &valores[i]);
		}
		while (valores[i] % 2);
	}

	for (i = 5; i >= 0; i--)
	{
		printf("Posicao[%d]: %d\n", i, valores[i]);
	}

	return 0;
}
