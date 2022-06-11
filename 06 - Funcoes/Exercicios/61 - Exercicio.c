#include <stdio.h>

int VerificaAnagrama(char* primeira, char* segunda, int tamanho_primeira, int tamanho_segunda)
{
	int i, j, contador, resultado;

	resultado = 0;
	if (tamanho_primeira == tamanho_segunda)
	{
		contador = 0;
		for (i = 0; i < tamanho_primeira; i++)
		{
			for (j = 0; j < tamanho_primeira; j++)
			{
				if (*(primeira+i) == *(segunda+j))
				{
					contador++;
					break;
				}
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
	char primeira[4] = "roma", segunda[4] = "amor";

	resultado = VerificaAnagrama(&primeira[0], &segunda[0], 4, 4);

	if (resultado)
	{
		printf("E anagrama");
	}
	else
	{
		printf("Nao e anagrama");
	}

	return 0;
}
