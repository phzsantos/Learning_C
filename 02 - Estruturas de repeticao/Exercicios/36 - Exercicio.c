#include <stdio.h>

int main()
{
	int i, soma_quadrado_numeros, soma_quadrado_soma, resultado;

	soma_quadrado_numeros = 0;
	soma_quadrado_soma = 0;
	for (i = 1; i < 100; i++)
	{
		soma_quadrado_numeros =  soma_quadrado_numeros + (i * i);
	}

	for (i = 1; i <= 100; i++)
	{
		soma_quadrado_soma += i;
	}

	soma_quadrado_soma = soma_quadrado_soma * soma_quadrado_soma;

	resultado = soma_quadrado_soma - soma_quadrado_numeros;

	printf ("Resultado: %d", resultado);

	return 0;
}
