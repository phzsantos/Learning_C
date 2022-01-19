#include <stdio.h>

int main()
{
	int i;
	double valor_base, valor_premio, valores_investidos[3], porcentagens[3], valores_recebidos[3];

	printf("Valor base da aposta: ");
	scanf("%lf", &valor_base);
	printf("Valor do premio: ");
	scanf("%lf", &valor_premio);

	for (i = 0; i < 3; i++)
	{
		printf("Valor do %dº amigo: ", i+1);
		scanf("%lf", &valores_investidos[i]);
	}

	for (i = 0; i < 3; i++)
	{
		porcentagens[i] = (valores_investidos[i] * 100) / valor_base;
	}
	
	for (i = 0; i < 3; i++)
	{
		valores_recebidos[i] = valor_premio * porcentagens[i] / 100;
	}

	for (i = 0; i < 3; i++)
	{
		printf("Valor que o %dº recebe: %.2lf\n", i+1, valores_recebidos[i]);
	}

	return 0;
}
