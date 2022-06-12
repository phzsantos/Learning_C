#include <stdio.h>

void ConcatenaStrings(char* primeira, char* segunda, char* concatenada, int tamanho_primeira, int tamanho_segunda)
{
	for (int i = 0; i < (tamanho_primeira+tamanho_segunda); i++)
	{
		if (i < tamanho_primeira)
		{
			*(concatenada+i) = *(primeira+i);
		}
		else
		{
			*(concatenada+i) = *(segunda+(i-tamanho_primeira));
		}
	}
}

int main()
{
	int i;
	char primeira[4] = "bom ", segunda[3] = "dia", concatenada[6];

	ConcatenaStrings(&primeira[0], &segunda[0], &concatenada[0], 4, 3);

	for (i = 0; i < 7; i++)
	{
		printf("%c", concatenada[i]);
	}

	return 0;
}
