#include <stdio.h>

int main()
{
	int i, valores[10];

	for (i = 0; i < 10; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &valores[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (valores[i] < 0)
		{
			valores[i] = 0;
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", valores[i]);
	}

	return 0;
}
