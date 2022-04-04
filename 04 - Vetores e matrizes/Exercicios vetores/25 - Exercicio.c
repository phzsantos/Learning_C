#include <stdio.h>

int main()
{
	int i, j, valores[100];

	j = 0;
	for (i = 0; j <= 99; i++)
	{
		if (i % 7 != 0 || i % 10 == 7)
		{
			valores[j] = i;
			j++;
		}
	}

	for (i = 0; i < 100; i++)
	{
		printf("Posicao[%d]: %d\n", i, valores[i]);
	}

	return 0;
}
