#include <stdio.h>

void DesenhaLinha(int* tamanho)
{
	int i;
	char linha[(*tamanho)];

	for (i = 0; i < (*tamanho); i++)
	{
		linha[i] = '=';
	}

	printf("%s", linha);
}

int main()
{
	int tamanho;

	printf("Tamanho: ");
	scanf("%d", &tamanho);

	DesenhaLinha(&tamanho);

	return 0;
}
