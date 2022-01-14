#include <stdio.h>

int main()
{
	double salario_base, salario_liquido;

	printf("Digite o valor do salario base: ");
	scanf("%lf", &salario_base);

	salario_liquido = salario_base + ((salario_base * 5)/100) - ((salario_base * 7)/100);

	printf("Salario liquido: %.2lf", salario_liquido);

	return 0;
}
