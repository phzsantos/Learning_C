#include <stdio.h>

int main()
{
	int i, numero;

	printf("Digite um numero: ");
	scanf("%d", &numero);

	for (i = 0; i <= numero; i++)
	{
		printf("%d", i);
		if (i < numero)
		{
			printf(",");
		}
	}

	return 0;
}
