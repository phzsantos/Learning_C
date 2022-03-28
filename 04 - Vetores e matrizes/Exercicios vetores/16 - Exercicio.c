#include <stdio.h>

int main()
{
	int i, codigo;
	double valores[5];

	for (i = 0; i < 5; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%lf", &valores[i]);
	}

	printf("Codigo: ");
	scanf("%d", &codigo);

	switch (codigo)
	{
		case 0:
			printf("Programa finalizado.");
			break;
		case 1:
			for (i = 0; i < 5; i++)
			{
				printf("%.2lf\n", valores[i]);
			}
			break;
		case 2:
			for (i = 4; i >= 0; i--)
			{
				printf("%.2lf\n", valores[i]);
			}
			break;
		default:
			printf("Codigo invalido");
	}

	return 0;
}
