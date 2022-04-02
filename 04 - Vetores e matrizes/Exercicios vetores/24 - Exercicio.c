#include <stdio.h>

int main()
{
	int i, numero[10], numero_mais_alto, numero_mais_baixo;
	double altura[10], mais_alto, mais_baixo;

	for (i = 0; i < 10; i++)
	{
		printf("Numero: ");
		scanf("%d", &numero[i]);
		printf("Altura: ");
		scanf("%lf", &altura[i]);
	}

	mais_alto = altura [0];
	mais_baixo = altura[0];
	numero_mais_alto = numero[0];
	numero_mais_baixo = numero[0];
	for (i = 1; i < 10; i++)
	{
		if (altura[i] > mais_alto)
		{
			mais_alto = altura[i];
			numero_mais_alto = numero[i];
		}
		else
		{
			if (altura[i] < mais_baixo)
			{
				mais_baixo = altura[i];
				numero_mais_baixo = numero[i];
			}
		}
	}

	printf("Altura do mais alto: %.2lf\n", mais_alto);
	printf("Numero do mais alto: %d\n", numero_mais_alto);
	printf("Altura do mais baixo: %.2lf\n", mais_baixo);
	printf("Numero do mais baixo: %d", numero_mais_baixo);

	return 0;
}
