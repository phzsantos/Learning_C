#include <stdio.h>
#include <math.h>

int main()
{
	double numero, raiz, quadrado;

	printf("Digite um numero: ");
	scanf("%lf", &numero);

	if (numero >= 0)
	{
		quadrado = pow(numero, 2.0);
		raiz = sqrt(numero);

		printf("Seu numero ao quadrado: %.2lf\n", quadrado);
		printf("Raiz quadrada do seu numero: %.2lf", raiz);
	}
	else
	{
		printf("Seu numero nao atende aos requisitos.");
	}

	return 0;
}
