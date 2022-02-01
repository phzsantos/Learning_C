#include <stdio.h>

int main()
{
	int dia, mes, ano, verificacao_dia;

	printf("Dia: ");
	scanf("%d", &dia);
	printf("Mes: ");
	scanf("%d", &mes);
	printf("Ano: ");
	scanf("%d", &ano);

	if (ano <= 2008 && dia > 0 && mes > 0 && mes < 13)
	{
		switch (mes)
		{
			case 1:
				if (dia <= 31)
				{
					verificacao_dia = 0;
				}
				else
				{
					verificacao_dia = 1;
				}
				break;
			case 2:
				if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
				{
					if (dia <= 29)
					{
						verificacao_dia = 0;
					}
					else
					{
						verificacao_dia = 1;
					}
				}
				else
				{
					if (dia <= 28)
					{
						verificacao_dia = 0;
					}
					else
					{
						verificacao_dia = 1;
					}
				}
				break;
			case 3:
				if (dia <= 31)
				{
					verificacao_dia = 0;
				}
				else
				{
					verificacao_dia = 1;
				}
				break;
			case 4:
				if (dia <= 30)
				{
					verificacao_dia = 0;
				}
				else
				{
					verificacao_dia = 1;
				}
				break;
			case 5:
				if (dia <= 31)
				{
					verificacao_dia = 0;
				}
				else
				{
					verificacao_dia = 1;
				}
				break;
			case 6:
				if (dia <= 30)
				{
					verificacao_dia = 0;
				}
				else
				{
					verificacao_dia = 1;
				}
				break;
			case 7:
				if (dia <= 31)
				{
					verificacao_dia = 0;
				}
				else
				{
					verificacao_dia = 1;
				}
				break;
			case 8:
				if (dia <= 31)
				{
					verificacao_dia = 0;
				}
				else
				{
					verificacao_dia = 1;
				}
				break;
			case 9:
				if (dia <= 30)
				{
					verificacao_dia = 0;
				}
				else
				{
					verificacao_dia = 1;
				}
				break;
			case 10:
				if (dia <= 31)
				{
					verificacao_dia = 0;
				}
				else
				{
					verificacao_dia = 1;
				}
				break;
			case 11:
				if (dia <= 30)
				{
					verificacao_dia = 0;
				}
				else
				{
					verificacao_dia = 1;
				}
				break;
			case 12:
				if (dia <= 30)
				{
					verificacao_dia = 0;
				}
				else
				{
					verificacao_dia = 1;
				}
				break;
		}

		if (verificacao_dia == 0)
		{
			printf("Data valida!");
		}
		else
		{
			printf("Data invalida.");
		}
	}
	else
	{
		printf("Digite uma data valida.");
	}

	return 0;
}
