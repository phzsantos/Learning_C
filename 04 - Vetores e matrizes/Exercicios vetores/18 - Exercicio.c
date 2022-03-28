#include <stdio.h>

int main()
{
	int i, multiplos, valores[10], numero;

	for (i = 0; i < 10; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &valores[i]);
	}

	printf("Numero: ");
	scanf("%d", &numero);

	multiplos = 0;
	for (i = 0; i < 10; i++)
	{
		if (valores[i] % numero == 0)
		{
			multiplos++;
		}
	}

	printf("Multiplos: %d", multiplos);

	return 0;
}
