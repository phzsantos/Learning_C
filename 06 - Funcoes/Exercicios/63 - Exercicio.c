#include <stdio.h>

int ComparaStrings(char* primeira, char* segunda, int tamanho_primeira, int tamanho_segunda)
{
	int i, contador, resultado;

	resultado = 0;
	if (tamanho_primeira == tamanho_segunda)
	{
		contador = 0;
		for (i = 0; i < tamanho_primeira; i++)
		{
			if (*(primeira+i) == *(segunda+i))
			{
				contador++;
			}
		}

		if (contador == tamanho_primeira)
		{
			resultado = 1;
		}
	}

	return resultado;
}

int main()
{
	int resultado;
	char primeira[3] = "bom", segunda[3] = "dia";

	resultado = ComparaStrings(&primeira[0], &segunda[0], 3, 3);

	if (resultado)
	{
		printf("Strings sao iguais.");
	}
	else
	{
		printf("Strings sao diferentes.");
	}

	return 0;
}
