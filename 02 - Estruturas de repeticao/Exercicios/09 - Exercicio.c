#include <stdio.h>

int main()
{
	int i, numero;

	printf("Digite um numero (apenas positivos): ");
	scanf("%d", &numero);

	for (i = 0; i < numero; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d", i);
			if ((i != numero-1) && ( i != numero - 2))
			{
				printf(",");
			}
		}
	}

	return 0;
}
