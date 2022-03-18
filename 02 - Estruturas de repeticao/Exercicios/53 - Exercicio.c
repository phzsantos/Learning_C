#include <stdio.h>

int main()
{
	int i, j, k, n;

	printf("Valor: ");
	scanf("%d", &n);

	k = 1;
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%d ", k);
			k++;
		}
		printf("\n");
	}

	return 0;
}
