#include <stdio.h>

int main()
{
	int i, numero;

	printf("Digite um numero: ");
	scanf("%d", &numero);

	for (i = numero; i >= 0; i--)
	{
		printf("%d", i);
		if (i > 0)
		{
			printf(",");
		}
	}

	return 0;
}
