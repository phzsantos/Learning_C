#include <stdio.h>

int main()
{
	int anos;
	double salario_atual, salario_com_aumento, salario_com_acrescimo;

	printf("Salario atual: ");
	scanf("%lf", &salario_atual);
	printf("Anos de empresa: ");
	scanf("%d", &anos);

	if (salario_atual > 0 && anos >= 0)
	{
		if (salario_atual <= 500)
		{
			salario_com_aumento = salario_atual + (salario_atual * 25/100);
		}
		else if (salario_atual <= 1000)
		{
			salario_com_aumento = salario_atual + (salario_atual * 20/100);
		}
		else if (salario_atual <= 1500)
		{
			salario_com_aumento = salario_atual + (salario_atual * 15/100);
		}
		else if (salario_atual <= 2000)
		{
			salario_com_aumento = salario_atual + (salario_atual * 10/100);
		}
		else
		{
			salario_com_aumento = salario_atual;
			printf("Salario nao pode receber reajuste.\n");
		}

		if (anos == 0)
		{
			salario_com_acrescimo = salario_com_aumento;
			printf("Salario nao pode receber acrescimo.\n");
		}
		else if (anos <= 3)
		{
			salario_com_acrescimo = salario_com_aumento + 100;
		}
		else if (anos <= 6)
		{
			salario_com_acrescimo = salario_com_aumento + 200;
		}
		else if (anos <= 10)
		{
			salario_com_acrescimo = salario_com_aumento + 300;
		}
		else
		{
			salario_com_acrescimo = salario_com_aumento + 500;
		}

		printf("Salario final: %.2lf", salario_com_acrescimo);
	}
	else
	{
		printf("Digite valores validos.");
	}

	return 0;
}
