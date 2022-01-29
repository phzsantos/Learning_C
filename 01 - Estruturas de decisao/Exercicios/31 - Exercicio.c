#include <stdio.h>

int main()
{
	char classificacao;
	double peso, altura;

	printf("Altura: ");
	scanf("%lf", &altura);
	printf("Peso: ");
	scanf("%lf", &peso);

	if (peso <= 60)
	{
		if (altura < 1.20)
		{
			classificacao = 'A';
		}
		else if (altura <= 1.70)
		{
			classificacao = 'B';
		}
		else
		{
			classificacao = 'C';
		}
	}
	else if (peso <= 90)
	{
		if (altura < 1.20)
		{
			classificacao = 'D';
		}
		else if (altura <= 1.70)
		{
			classificacao = 'E';
		}
		else
		{
			classificacao = 'F';
		}
	}
	else
	{
		if (altura < 1.20)
		{
			classificacao = 'G';
		}
		else if (altura <= 1.70)
		{
			classificacao = 'H';
		}
		else
		{
			classificacao = 'I';
		}
	}

	printf("Classificacao: %c", classificacao);

	return 0;
}
