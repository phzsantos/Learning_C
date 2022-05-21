#include <stdio.h>

int pow(int* x, int* z)
{
	int i, produto;

	produto = (*x);
	for (i = 1; i < (*z); i++)
	{
		produto *= (*x);
	}

	return produto;
}

int main()
{
	int x, z, produto;

	printf("X: ");
	scanf("%d", &x);

	printf("Z: ");
	scanf("%d", &z);

	produto = pow(&x, &z);

	printf("Produto: %d", produto);

	return 0;
}
