#include <stdio.h>

int main()
{
	int a[6], soma, i;

	a[0] = 1;
	a[1] = 0;
	a[2] = 5;
	a[3] = -2;
	a[4] = -5;
	a[5] = 7;

	soma = a[0] + a[1] + a[5];

	printf("Soma: %d\n", soma);

	a[4] = 100;

	for (i = 0; i < 6; i++)
	{
		printf("Vetor[%d]: %d\n", i, a[i]);
	}

	return 0;
}
