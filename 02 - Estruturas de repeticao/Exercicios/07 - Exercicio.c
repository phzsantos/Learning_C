#include <stdio.h>

int main()
{
	int i, numeros[10], soma;

	for (i = 0; i < 10; i++)
	{
		printf("%dº Numero: ", i+1);
		scanf("%d", &numeros[i]);

		if (numeros[i] < 0)
		{
			printf("Digite novamente (apenas positivos): ", i+1);
			scanf("%d", &numeros[i]);
		}
	}

	soma = 0;
	for (i = 0; i < 10; i++)
	{
		soma = soma + numeros[i];
	}

	printf("Soma: %d", soma);

	return 0;
}
