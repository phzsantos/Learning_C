#include <stdio.h>

int SomaAte(int* numero)
{
	int i, soma;

	soma = 0;
	for (i = 1; i <= (*numero); i++)
	{
		soma += i;
	}

	return soma;
}

int main()
{
	int numero, soma;

	do
	{
		printf("Numero: ");
		scanf("%d", &numero);
	}
	while (numero < 0);

	soma = SomaAte(&numero);

	printf("Soma: %d", soma);

	return 0;
}
