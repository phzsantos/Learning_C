#include <stdio.h>

void CriaVetores(int* vetor, int* vetorA, int* vetorB, int* k, int* j)
{
	int i;

	for (i = 0; i < 30; i++)
	{
		if (*(vetor+i) % 2 == 0)
		{
			*(vetorA+(*k)) = *(vetor+i);
			(*k)++;
		}
		else
		{
			*(vetorB+(*j)) = *(vetor+i);
			(*j)++;
		}
	}
}

int main()
{
	int i, j, k, l, valores[30], A[30], B[30];

	k = 0;
	j = 0;
	for (i = 0; i < 30; i++)
	{
		printf("%d: ", i);
		scanf("%d", &valores[i]);
	}

	CriaVetores(&valores[0], &A[0], &B[0], &k, &j);

	printf("A pares: \n");
	for (i = 0; i < k; i++)
	{
		printf("%d ", A[i]);
	}

	printf("\nB impares: \n");
	for (l = 0; l < j; l++)
	{
		printf("%d ", B[l]);
	}

	return 0;
}
