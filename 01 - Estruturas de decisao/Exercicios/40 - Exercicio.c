#include <stdio.h>

int main()
{
	double custo_fabrica, custo_final;

	printf("Digite o custo da fabrica: ");
	scanf("%lf", &custo_fabrica);

	if (custo_fabrica > 0)
	{
		if (custo_fabrica <= 12000)
		{
			custo_final = custo_fabrica + (custo_fabrica * 5/100);
		}
		else if (custo_fabrica <= 25000)
		{
			custo_final = custo_fabrica + (custo_fabrica * 10/100) + (custo_fabrica * 15/100);
		}
		else
		{
			custo_final = custo_fabrica + (custo_fabrica * 15/100) + (custo_fabrica * 20/100);
		}

		printf("Custo final: %.2lf", custo_final);
	}
	else
	{
		printf("Digite um valor valido.");
	}

	return 0;
}
