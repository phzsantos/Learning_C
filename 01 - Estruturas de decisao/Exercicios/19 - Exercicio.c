#include <stdio.h>

int main()
{
	int numero;

	printf("Digite um numero: ");
	scanf("%d", &numero);

	if (!((numero % 3 == 0) && (numero % 5 == 0)) && ((numero % 3 == 0) || (numero % 5 == 0)))
	{
		if (numero % 3 == 0)
		{
			printf("Esse numero e divisivel por 3");
		}
		else
		{
			printf("Esse numero e divisivel por 5.");
		}
	}
	else
	{
		printf("Esse numero e divisivel tanto por 3 quanto por 5");
	}

	return 0;
}
