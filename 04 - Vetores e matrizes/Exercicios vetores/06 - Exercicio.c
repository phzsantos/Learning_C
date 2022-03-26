#include <stdio.h>

int main()
{
	int valores[10], maior, menor, i;

	for (i = 0; i < 10; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &valores[i]);
	}

	maior = valores[0];
	menor = valores[0];
	for (i = 1; i < 10; i++)
	{
		if (valores[i] > maior)
		{
			maior = valores[i];
		}
		else
		{
			if (valores[i] < menor)
			{
				menor = valores[i];
			}
		}
	}

	printf("Maior: %d\n", maior);
	printf("Menor: %d", menor);

	return 0;
}
