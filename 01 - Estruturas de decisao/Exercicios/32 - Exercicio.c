#include <stdio.h>

int main()
{
	int produto, qtd;
	double valor;

	printf("Produtos:\n");
	printf("100 - Cachorro quente\n");
	printf("101 - Bauru simples\n");
	printf("102 - Bauru com ovo\n");
	printf("103 - Hamburguer\n");
	printf("104 - Cheeseburguer\n");
	printf("105 - Suco\n");
	printf("106 - Refrigerante\n");
	printf("Produto escolhido: ");
	scanf("%d", &produto);

	if (produto >= 100 && produto <= 106)
	{
		printf("Quantidade: ");
		scanf("%d", &qtd);

		switch (produto)
		{
			case 100:
				valor = qtd * 1.20;
				break;
			case 101:
				valor = qtd * 1.30;
				break;
			case 102:
				valor = qtd * 1.50;
				break;
			case 103:
				valor = qtd * 1.20;
				break;
			case 104:
				valor = qtd * 1.70;
				break;
			case 105:
				valor = qtd * 2.20;
				break;
			case 106:
				valor = qtd * 1.00;
				break;
		}

		printf("Valor da conta: %.2lf", valor);
	}
	else
	{
		printf("Produto nao existe.");
	}

	return 0;
}
