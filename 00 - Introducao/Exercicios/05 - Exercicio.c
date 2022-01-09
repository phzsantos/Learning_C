#include <stdio.h>

int main()
{
	double numero, quinta_parte;

	printf("Digite um numero: ");
	scanf("%lf", &numero);

	quinta_parte = numero / 5;

	printf("Quinta parte do seu numero e: %.2lf", quinta_parte);

	return 0;
}
