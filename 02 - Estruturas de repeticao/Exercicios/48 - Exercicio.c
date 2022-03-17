#include <stdio.h>

int main()
{
	int anterior, atual, proximo, soma;

	soma = 0;
	anterior = 0;
	atual = 1;
	proximo = 1;
	while (proximo < 4000000)
	{
		proximo = atual + anterior;
		anterior = atual;
		atual = proximo;

		if (proximo % 2 == 0)
		{
			soma += proximo;
		}
	}

	printf("Soma: %d", soma);

	return 0;
}
