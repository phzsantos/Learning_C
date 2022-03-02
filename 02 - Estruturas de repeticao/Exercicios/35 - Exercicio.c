#include <stdio.h>

int main()
{
	int comeco, fim, i, soma;

	printf("Comeco: ");
	scanf("%d", &comeco);
	printf("Fim: ");
	scanf("%d", &fim);

	soma = 0;
	if (comeco < fim)
	{
		for (i = comeco; i <= fim; i++)
		{
			if (i % 2)
			{
				soma += i;
			}
		}

		printf("Soma: %d", soma);
	}
	else
	{
		printf("Intevalo de valores invalido.");
	}

	return 0;
}
