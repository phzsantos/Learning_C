#include <stdio.h>

void DesenhaTriangulo(int* linhas)
{
	int i, j;

	for (i = 0; i < (*linhas); i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("!");
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
