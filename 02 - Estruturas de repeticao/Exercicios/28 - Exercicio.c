#include <stdio.h>

int main()
{
	int i, j;
	double numero, fatorial, resultado;

	printf("Numero: ");
	scanf("%lf", &numero);

	resultado = 1;
	for (i = 2; i <= numero; i++)
	{
		fatorial = i;
		for (j = i; j > 0; j--)
		{
			fatorial *= j;
		}

		resultado += (double) 1/(fatorial);
	}

	printf("Resultado: %.2lf", resultado);

	return 0;
}
