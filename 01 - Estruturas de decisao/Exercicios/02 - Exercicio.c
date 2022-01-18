#include <stdio.h>
#include <math.h>

int main()
{
	int numero;
	double raiz;

	printf("Digite um numero: ");
	scanf("%d", &numero);

	if (numero >= 0)
	{
		raiz = sqrt(numero);
		printf("Raiz quadrada do seu numero: %.2lf", raiz);
	}
	else
	{
		printf("Numero invalido.");
	}

	return 0;
}
