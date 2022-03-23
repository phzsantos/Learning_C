#include <stdio.h>

int main()
{
	int i, numero, temporario, soma;

	soma = 0;
	for (i = 1; i <= 1000; i++)
	{
		numero = i;
		temporario = numero;

		temporario /= 100;

		if (temporario == 1)
		{
			if (numero == 100)
			{
				soma += 3;
			}
			else
			{
				soma += 5;
			}
			numero -= 100;
		}
		else if (temporario == 2)
		{
			soma += 8;
			numero -= 200;
		}
		else if	(temporario == 3)
		{
			soma += 9;
			numero -= 300;
		}
		else if (temporario == 4)
		{
			soma += 12;
			numero -= 400;
		}
		else if (temporario == 5)
		{
			soma += 10;
			numero -= 500;
		}
		else if (temporario == 6)
		{
			soma += 10;
			numero -= 600;
		}
		else if (temporario == 7)
		{
			soma += 10;
			numero -= 700;
		}
		else if (temporario == 8)
		{
			soma += 10;
			numero -= 800;
		}
		else if (temporario == 9)
		{
			soma += 10;
			numero -= 900;
		}
		else if (temporario == 10)
		{
			numero -= 1000;
			soma += 3;
		}

		if (numero > 0)
		{
			temporario = numero;

			temporario /= 10;

			if (numero >= 20)
			{
				if (temporario == 2)
				{
					soma += 5;
					numero -= 20;
				}
				else if (temporario == 3)
				{
					soma += 6;
					numero -= 30;
				}
				else if (temporario == 4)
				{
					soma += 8;
					numero -= 40;
				}
				else if (numero / 10 == 5)
				{
					soma += 9;
					numero -= 50;
				}
				else if (temporario == 6)
				{
					soma += 8;
					numero -= 60;
				}
				else if (temporario == 7)
				{
					soma += 7;
					numero -= 70;
				}
				else if (temporario == 8)
				{
					soma += 7;
					numero -= 80;
				}
				else if (temporario == 9)
				{
					soma += 7;
					numero -= 90;
				}
			}
			else if (numero > 10)
			{
				if (numero == 11)
				{
					soma += 4;
					numero -= 11;
				}
				else if (numero == 12)
				{
					soma += 4;
					numero -= 12;
				}
				else if (numero == 13)
				{
					soma += 5;
					numero -= 13;
				}
				else if (numero == 14)
				{
					soma += 8;
					numero -= 14;
				}
				else if (numero == 15)
				{
					soma += 6;
					numero -= 15;
				}
				else if (numero ==16)
				{
					soma += 9;
					numero -= 16;
				}
				else if (numero == 17)
				{
					soma += 9;
					numero -= 17;
				}
				else if (numero == 18)
				{
					soma += 7;
					numero -= 18;
				}
				else
				{
					soma += 8;
					numero -= 19;
				}
			}

			if (numero > 0)
			{
				temporario = numero;

				temporario %= 10;

				if (numero % 10 == 1)
				{
					soma += 2;
				}
				else if (numero % 10 == 2 ||
						 numero % 10 == 3 ||
						 numero % 10 == 6 ||
						 numero % 10 == 7 ||
						 numero % 10 == 8 ||
						 numero % 10 == 9)
				{
					soma += 4;
				}
				else if (numero % 10 == 4)
				{
					soma += 6;
				}
				else if (numero % 10 == 5)
				{
					soma += 5;
				}
				else
				{
					soma += 3;
				}
			}
		}
	}

	printf("Soma: %d", soma);

	return 0;
}
