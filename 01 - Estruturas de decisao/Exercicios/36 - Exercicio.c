#include <stdio.h>

int main()
{
	double venda, comissao;

	printf("Venda: ");
	scanf("%lf", &venda);

	if (venda > 0)
	{
		if (venda < 20000)
		{
			comissao = 400 + (venda * 14/100);
		}
		else if (venda < 40000)
		{
			comissao = 500 + (venda * 14/100);
		}
		else if (venda < 60000)
		{
			comissao = 550 + (venda * 14/100);
		}
		else if (venda < 80000)
		{
			comissao = 600 + (venda * 14/100);
		}
		else if (venda < 100000)
		{
			comissao = 650 + (venda * 14/100);
		}
		else
		{
			comissao = 700 + (venda * 16/100);
		}

		printf("Comissao: %.2lf", comissao);
	}
	else
	{
		printf("Digite um valor de venda valido.");
	}

	return 0;
}
