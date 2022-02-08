#include <stdio.h>

int main()
{
	int i, numero;

	printf("Numero: ");
	scanf("%d", &numero);

	for (i = numero; i >= 0; i--)
	{
		if (i % 2 == 0)
		{
			printf("%d", i);

			if (i > 0)
			{
				printf(",");
			}
		}
	}

	return 0;
}
