#include <stdio.h>

int main()
{
	int i, j, repetido, valores[10];

	repetido = 0;
	for (i = 0; i < 10; i++)
	{
		do
		{
			printf("Posicao[%d]: ", i);
			scanf("%d", &valores[i]);

			repetido = 0;
			for (j = 0; j < i; j++)
			{
				if (valores[i] == valores[j])
				{
					repetido = 1;
				}
			}
		}
		while (repetido);
	}

	printf("Vetor: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", valores[i]);
	}

	return 0;
}
