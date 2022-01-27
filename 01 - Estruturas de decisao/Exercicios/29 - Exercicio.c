#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, acertos = 0, erros = 0, tentativa, numeros[2], soma;

	for (i = 0; i < 5; i++)
	{
		soma = 0;
		for (j = 0; j < 2; j++)
		{
			numeros[j] = 1 + (rand() % 100);
			soma = soma + numeros[j];
		}

		printf("%d + %d: ", numeros[0], numeros[1]);
		scanf("%d", &tentativa);

		if (tentativa == soma)
		{
			printf("Acertou!\n");
			acertos++;
		}
		else
		{
			printf("Errou.\n");
			erros++;
		}
	}

	printf("Erros: %d, acertos: %d", erros, acertos);

	return 0;
}
