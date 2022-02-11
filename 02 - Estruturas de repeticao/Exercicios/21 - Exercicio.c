#include <stdio.h>

int main()
{
	int i, primeiro, segundo, soma, multiplicacao;

	printf("Primeiro: ");
	scanf("%d", &primeiro);

	printf("Segundo: ");
	scanf("%d", &segundo);

	soma = 0;
	multiplicacao = 1;
	for (i = primeiro; i <= segundo; i++)
	{
		if (i % 2 == 0)
		{
			soma = soma + i;
		}
		else
		{
			multiplicacao = multiplicacao * i;
		}
	}

	printf("Soma dos pares: %d\n", soma);
	printf("Multiplicacao dos impares: %d", multiplicacao);

	return 0;
}
