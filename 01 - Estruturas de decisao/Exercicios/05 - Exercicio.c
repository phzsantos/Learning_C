#include <stdio.h>

int main()
{
	int numero;

	printf("Digite um numero: ");
	scanf("%d", &numero);

	if (numero % 2 == 0)
	{
		printf("Seu numero e par.");
	}
	else
	{
		printf("Seu numero e impar.");
	}

	return 0;
}
