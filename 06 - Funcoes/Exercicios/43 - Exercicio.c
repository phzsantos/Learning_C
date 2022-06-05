#include <stdio.h>
#include <stdlib.h>

void Aleatoriza(int* vetor)
{
	int i, k, incluir, numero;

	for (i = 0; i < 10; i++)
	{
		do
		{
			incluir = 1;
			numero = (rand() % 1000);

			for (k = 0; k < 10; k++)
			{
				if (numero == *(vetor+k))
				{
					incluir = 0;
				}
			}
		}
		while (incluir == 0);

		*(vetor+i) = numero;
	}
}

int main()
{
	int i, valores[10];

	for (i = 0; i < 10; i++)
	{
		printf("%d: ", i);
		scanf("%d", &valores[i]);
	}

	Aleatoriza(&valores[0]);

	for (i = 0; i < 10; i++)
	{
		printf("%d ", valores[i]);
	}

	return 0;
}
