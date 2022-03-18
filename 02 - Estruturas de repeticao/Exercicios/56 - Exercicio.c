#include <stdio.h>

int main()
{
	int i, j, divisores, soma;

	soma = 17;
	for (i = 8; i < 2000000; i++)
	{
		if (i % 2 && i % 3 && i % 5 && i % 7)
		{
			divisores = 0;
			printf("%d\n", i);
			for (j = 1; j <= i; j++)
			{
				if (i % j == 0)
				{
					divisores++;
				}
			}

			if (divisores == 2)
			{
				soma += i;
			}
		}
	}

	printf("Soma: %d", soma);
	//Resultado: 1179908154

	return 0;
}
