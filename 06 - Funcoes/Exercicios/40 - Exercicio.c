#include <stdio.h>

int ContaPares(int* vetor)
{
	int i, quantidade_pares;

	quantidade_pares = 0;
	for (i = 0; i < 10; i++)
	{
		if (*(vetor+i) % 2 == 0)
		{
			quantidade_pares++;
		}
	}

	return quantidade_pares;
}

int main()
{
	int i, valores[10], quantidade_pares;

	for (i = 0; i < 10; i++)
	{
		printf("%d: ", i);
		scanf("%d", &valores[i]);
	}

	quantidade_pares = ContaPares(&valores[0]);

	printf("Quantidade de pares: %d", quantidade_pares);

	return 0;
}
