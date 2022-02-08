#include <stdio.h>

int main()
{
	int i, numero;

	printf("Numero: ");
	scanf("%d", &numero);

	for (i = 0; i < numero; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d", i);

			if (i < numero-2)
			{
				printf(",");
			}
		}
	}

	return 0;
}
