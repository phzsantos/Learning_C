#include <stdio.h>

void DesenhaTriangulo(int* linhas)
{
	int i, j, k, espaco;

	espaco = (*linhas)-1;
	for (i = 0; i < (*linhas); i++)
	{
		for (k = espaco; k > 0; k--)
		{
			printf(" ");
		}
		espaco--;

		for (j = 0; j <= (i*2); j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	int linhas;

	printf("Quantidade de linhas: ");
	scanf("%d", &linhas);

	DesenhaTriangulo(&linhas);

	return 0;
}
