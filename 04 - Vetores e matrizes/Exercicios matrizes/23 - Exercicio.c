#include <stdio.h>

int main()
{
	int i, j, l, A[3][3], B[3][3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Posicao[%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		l = 0;
		for (j = 0; j < 3; j++)
		{
			B[i][j] = A[i][0] * A[0][l] + A[i][1] * A[1][l] + A[i][2] * A[2][l];
			l++;
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}

	return 0;
}
