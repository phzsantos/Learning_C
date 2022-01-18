#include <stdio.h>
#include <math.h>

int main()
{
	double numero, raiz, quadrado;

	printf("Digite um numero: ");
	scanf("%lf", &numero);

	if (numero >= 0)
	{
		raiz = sqrt(numero);
		printf("Raiz quadrada do seu numero: %.2lf", raiz);
	}
	else
	{
		quadrado = pow(numero, 2.0);
		printf("Seu numero ao quadrado: %.2lf", quadrado);
	}

	return 0;
}
