#include <stdio.h>

int main()
{
	int i, A, B, tamanhoA, tamanhoB, vetorA[5], vetorB[5], soma[5], resto;

	do
	{
		printf("A: ");
		scanf("%d", &A);
	}
	while (A > 10000 || A < 0);

	do
	{
		printf("B: ");
		scanf("%d", &B);
	}
	while (A > 10000 || A < 0);

	if (A < 10)
	{
		tamanhoA = 1;
	}
	else if (A < 100)
	{
		tamanhoA = 2;
	}
	else if (A < 1000)
	{
		tamanhoA = 3;
	}
	else
	{
		tamanhoA = 4;
	}

	if (A < 10)
	{
		tamanhoB = 1;
	}
	else if (B < 100)
	{
		tamanhoB = 2;
	}
	else if (B < 1000)
	{
		tamanhoB = 3;
	}
	else
	{
		tamanhoB = 4;
	}

	if (tamanhoA == 1)
	{
		vetorA[0] = A;
		vetorA[1] = 0;
		vetorA[2] = 0;
		vetorA[3] = 0;
		vetorA[4] = 0;
	}
	else if (tamanhoA == 2)
	{
		vetorA[0] = A % 10;
		vetorA[1] = A / 10;
		vetorA[2] = 0;
		vetorA[3] = 0;
		vetorA[4] = 0;
	}
	else if (tamanhoA == 3)
	{
		vetorA[0] = A % 10;
		vetorA[2] = A / 100;
		vetorA[1] = A / 10 - (vetorA[2] * 10);
		vetorA[3] = 0;
		vetorA[4] = 0;
	}
	else
	{
		vetorA[0] = A % 10;
		vetorA[3] = A / 1000;
		vetorA[2] = A / 100 - (vetorA[3] * 10);
		vetorA[1] = A / 10 - (vetorA[2] * 10) - (vetorA[3] * 100);
		vetorA[4] = 0;
	}

	if (tamanhoB == 1)
	{
		vetorB[0] = B;
		vetorB[1] = 0;
		vetorB[2] = 0;
		vetorB[3] = 0;
		vetorB[4] = 0;
	}
	else if (tamanhoA == 2)
	{
		vetorB[0] = B % 10;
		vetorB[1] = B / 10;
		vetorB[2] = 0;
		vetorB[3] = 0;
		vetorB[4] = 0;
	}
	else if (tamanhoB == 3)
	{
		vetorB[0] = B % 10;
		vetorB[2] = B / 100;
		vetorB[1] = B / 10 - (vetorB[2] * 10);
		vetorB[3] = 0;
		vetorB[4] = 0;
	}
	else
	{
		vetorB[0] = B % 10;
		vetorB[3] = B / 1000;
		vetorB[2] = B / 100 - (vetorB[3] * 10);
		vetorB[1] = B / 10 - (vetorB[2] * 10) - (vetorB[3] * 100);
		vetorB[4] = 0;
	}

	resto = 0;
	for (i = 0; i < 5; i++)
	{
		soma[i] = vetorA[i] + vetorB[i] + resto;

		resto = 0;
		while (soma[i] >= 10)
		{
			soma[i] -= 10;
			resto++;
		}
	}

	printf("Soma: ");
	for (i = 4; i >= 0; i--)
	{
		printf("%d", soma[i]);
	}

	return 0;
}
