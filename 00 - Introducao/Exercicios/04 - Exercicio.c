#include <stdio.h>

int main()
{
	double numero, quadrado;

	printf("Digite um numero: ");
	scanf("%lf", &numero);

	quadrado = numero * numero;

	printf("Seu numero elevado ao quadrado e: %.2lf", quadrado);

	return 0;
}
