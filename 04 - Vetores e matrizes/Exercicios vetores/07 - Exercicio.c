#include <stdio.h>

int main()
{
	int i, valores[10], maior, posicao_maior;

	for (i = 0; i < 10; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &valores[i]);
	}

	maior = valores[0];
	posicao_maior = 0;
	for (i = 1; i < 10; i++)
	{
		if (valores[i] > maior)
		{
			maior = valores[i];
			posicao_maior = i;
		}
	}

	printf("Maior: %d\n", maior);
	printf("Posicao: %d", posicao_maior);

	return 0;
}
