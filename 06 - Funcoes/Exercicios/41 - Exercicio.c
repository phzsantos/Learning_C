#include <stdio.h>

int Maior(int* vetor)
{
	int i, maior;

	maior = (*vetor);
	for (i = 0; i < 10; i++)
	{
		if (*(vetor+i) > maior)
		{
			maior = *(vetor+i);
		}
	}

	return maior;
}

int main()
{
	int i, valores[10], maior;

	for (i = 0; i < 10; i++)
	{
		printf("%d: ", i);
		scanf("%d", &valores[i]);
	}

	maior = Maior(&valores[0]);

	printf("Maior: %d", maior);

	return 0;
}
