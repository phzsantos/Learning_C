#include <stdio.h>

int main()
{
	int opcao;
	double preco, resultado;

	printf("Selecione um dos estados: \n");
	printf("1 - MG\n");
	printf("2 - SP\n");
	printf("3 - RJ\n");
	printf("4 - MS\n");
	scanf("%d", &opcao);

	if (opcao <= 4 && opcao > 0)
	{
		printf("Preco: ");
		scanf("%lf", &preco);

		switch (opcao)
		{
			case 1:
				resultado = (preco + (preco * 7/100));
				break;
			case 2:
				resultado = (preco + (preco * 12/100));
				break;
			case 3:
				resultado = (preco + (preco * 15/100));
				break;
			case 4:
				resultado = (preco + (preco * 8/100));
				break;
		}

		printf("Resultado: %.2lf", resultado);
	}
	else
	{
		printf("Estado invalido.\n");
	}

	return 0;
}
