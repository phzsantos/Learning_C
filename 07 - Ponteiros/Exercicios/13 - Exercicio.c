#include <stdio.h>

int acha_substring(char* string, char* substring, int tamanho_string, int tamanho_substring)
{
	int i, j, contador, resultado;

	resultado = -1;
	for (i = 0; i < tamanho_string; i++)
	{
		contador = 0;
		for (j = 0; j < tamanho_substring; j++)
		{
			if (*((string+i)+j) == *(substring+j))
			{
				contador++;
			}

			if (contador == tamanho_substring)
			{
				resultado = i;
				break;
			}
		}
	}

	return resultado;
}

int main()
{
	int resultado;
	char string[7] = "bom dia", substring[3] = "dia";

	resultado = acha_substring(&string[0], &substring[0], 7, 3);

	if (resultado == -1)
	{
		printf("Sub-string nao encontrada.\n");
	}
	else
	{
		printf("Sub-string encontrada dentro da string principal.\n");
	}

	return 0;
}
