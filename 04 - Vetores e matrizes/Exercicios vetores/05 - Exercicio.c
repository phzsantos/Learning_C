#include <stdio.h>

int main()
{
	int valores[10], qtdpares, i;

	for (i = 0; i < 10; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &valores[i]);
	}

	qtdpares = 0;
	for (i = 0; i < 10; i++)
	{
		if (valores[i] % 2 == 0)
		{
			qtdpares++;
		}
	}

	printf("Quantidade de pares: %d", qtdpares);

	return 0;
}
