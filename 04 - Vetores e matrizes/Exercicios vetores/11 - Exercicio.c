#include <stdio.h>

int main()
{
	int i, qtd_negativos;
	double valores[10], soma_positivos;

	for (i = 0; i < 10; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%lf", &valores[i]);
	}

	soma_positivos = 0;
	qtd_negativos = 0;
	for (i = 0; i < 10; i++)
	{
		if (valores[i] >= 0)
		{
			soma_positivos += valores[i];
		}
		else
		{
			qtd_negativos++;
		}
	}

	printf("Soma dos positivos: %.2lf\n", soma_positivos);
	printf("Quantidade de negativos: %d", qtd_negativos);

	return 0;
}
