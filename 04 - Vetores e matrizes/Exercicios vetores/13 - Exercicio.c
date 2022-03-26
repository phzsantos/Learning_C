#include <stdio.h>

int main()
{
	int i, valores[5], maior, menor, posicao_maior, posicao_menor;

	for (i = 0; i < 5; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &valores[i]);
	}

	maior = valores[0];
	posicao_maior = 0;
	menor = valores[0];
	posicao_menor = 0;
	for (i = 1; i < 5; i++)
	{
		if (valores[i] > maior)
		{
			maior = valores[i];
			posicao_maior = i;
		}
		else
		{
			if (valores[i] < menor)
			{
				menor = valores[i];
				posicao_menor = i;
			}
		}
	}

	printf("Posicao maior: %d\n", posicao_maior);
	printf("Posicao menor: %d", posicao_menor);

	return 0;
}
