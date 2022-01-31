#include <stdio.h>

int main()
{
	double preco_velho, preco_novo;

	printf("Digite o preco: ");
	scanf("%lf", &preco_velho);

	if (preco_velho > 0)
	{
		if (preco_velho <= 50)
		{
			preco_novo = preco_velho + (preco_velho * 5/100);
		}
		else if (preco_velho <= 100)
		{
			preco_novo = preco_velho + (preco_velho * 10/100);
		}
		else
		{
			preco_novo = preco_velho + (preco_velho * 15/100);
		}

		if (preco_novo <= 80)
		{
			printf("Barato");
		}
		else if (preco_novo <= 120)
		{
			printf("Normal");
		}
		else if (preco_novo <= 200)
		{
			printf("Caro");
		}
		else
		{
			printf("Muito caro");
		}
	}
	else
	{
		printf("Digite um preco valido.");
	}

	return 0;
}
