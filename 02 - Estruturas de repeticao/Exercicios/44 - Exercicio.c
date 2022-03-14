#include <stdio.h>

int main()
{
	int anterior, atual, proximo, valor, qtd, i;

	printf("Digite um valor positivo: ");
	scanf("%d", &valor);

	if (valor >= 0)
	{
		anterior = 0;
		atual = 1;
		proximo = 1;
		for (qtd = 1; valor+1 > proximo; qtd++)
		{
			proximo = atual + anterior;
			anterior = atual;
			atual = proximo;
		}

		anterior = 0;
		atual = 1;
		proximo = 1;
		for (i = 1; i <= qtd; i++)
		{
			if (i == qtd)
			{
				printf("%d", proximo);
			}
			else
			{
				printf("%d,", proximo);
			}

			proximo = atual + anterior;
			anterior = atual;
			atual = proximo;
		}
	}
	else
	{
		printf("Valor invalido.");
	}

	return 0;
}
