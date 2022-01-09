#include <stdio.h>

int main()
{
	double numero;

	printf("Digite um numero: ");
	scanf("%lf", &numero);

	printf("Este e o seu numero: %.2lf", numero);

	return 0;
}
