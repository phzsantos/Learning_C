#include <stdio.h>

int main()
{
	int i, numeros[10], maior, menor;

	for (i = 0; i < 10; i++)
	{
		printf("%dº Numero: ", i+1);
		scanf("%d", &numeros[i]);
	}

	maior = numeros[0];
	for (i = 1; i < 10; i++)
	{
		if (numeros[i] > maior)
		{
			maior = numeros[i];
		}
	}

	menor = numeros[0];
	for (i = 1; i < 10; i++)
	{
		if (numeros[i] < menor)
		{
			menor = numeros[i];
		}
	}

	printf("\nMaior: %d\n", maior);
	printf("Menor: %d", menor);

	return 0;
}
