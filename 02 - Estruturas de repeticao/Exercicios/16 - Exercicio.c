#include <stdio.h>

int main()
{
	int i, numero;

	printf("Numero: ");
	scanf("%d", &numero);

	for (i = numero; i >= 1; i--)
	{
		if (i % 2 != 0)
		{
			printf("%d", i);

			if (i > 1)
			{
				printf(",");
			}
		}
	}

	return 0;
}
