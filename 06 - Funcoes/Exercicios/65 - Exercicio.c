#include <stdio.h>

void ConcatenaStrings(char* primeira, char* segunda, char* concatenada, int tamanho_primeira, int quantidade_concatenar)
{
	for (int i = 0; i < (tamanho_primeira+quantidade_concatenar); i++)
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
	int i, quantidade_concatenar;
	char primeira[4] = "bom ", segunda[3] = "dia";

	do
	{
		printf("Quantidade a concatenar: ");
		scanf("%d", &quantidade_concatenar);
	}
	while (quantidade_concatenar < 0);

	if (quantidade_concatenar > 3)
	{
		quantidade_concatenar = 3;
	}

	char concatenada[4+quantidade_concatenar];

	ConcatenaStrings(&primeira[0], &segunda[0], &concatenada[0], 4, quantidade_concatenar);

	for (i = 0; i < 4+quantidade_concatenar; i++)
	{
		printf("%c", concatenada[i]);
	}

	return 0;
}
