#include <stdio.h>

int main()
{
	int numero, maior, menor;

	printf("Numero: ");
	scanf("%d", &numero);

	menor = numero;
	maior = numero;
	while (numero > 0)
	{
		printf("Numero: ");
		scanf("%d", &numero);

		if (numero > maior)
		{
			maior = numero;
		}
		else if (numero < menor && numero > 0)
		{
			menor = numero;
		}
	}

	printf("Maior: %d\n", maior);
	printf("Menor: %d", menor);

	return 0;
}
