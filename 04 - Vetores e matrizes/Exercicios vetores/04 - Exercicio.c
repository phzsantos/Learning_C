#include <stdio.h>

int main()
{
	int x, y, i, soma, valores[8];

	for (i = 0; i < 8; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &valores[i]);
	}

	printf("Valor x: ");
	scanf("%d", &x);
	printf("Valor y: ");
	scanf("%d", &y);

	soma = valores[x] + valores[y];

	printf("Soma: %d", soma);

	return 0;
}
