#include <stdio.h>

int SomaIntermediarios(int* primeiro, int* segundo)
{
	int i, soma_intermediarios;

	soma_intermediarios = 0;
	for (i = (*primeiro)+1; i < (*segundo); i++)
	{
		soma_intermediarios += i;
	}

	return soma_intermediarios;
}

int main()
{
	int primeiro, segundo, soma_intermediarios;

	do
	{
		printf("Primeiro: ");
		scanf("%d", &primeiro);
	}
	while(primeiro < 0);

	do
	{
		printf("Segundo: ");
		scanf("%d", &segundo);
	}
	while(segundo < 0);

	soma_intermediarios = SomaIntermediarios(&primeiro, &segundo);

	printf("Soma intermediarios: %d", soma_intermediarios);

	return 0;
}
