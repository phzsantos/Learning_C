#include <stdio.h>

void UniVetores(int* vetor, int* vetor2, int* uniao)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		*(uniao+i) = *(vetor+i);
		*(uniao+(i+10)) = *(vetor2+i);
	}
}

int main()
{
	int i, vetor[10], vetor2[10], uniao[20];

	for (i = 0; i < 10; i++)
	{
		printf("%d: ", i);
		scanf("%d", &vetor[i]);
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d: ", i);
		scanf("%d", &vetor2[i]);
	}

	UniVetores(&vetor[0], &vetor2[0], &uniao[0]);

	for (i = 0; i < 20; i++)
	{
		printf("%d ", uniao[i]);
	}

	return 0;
}
