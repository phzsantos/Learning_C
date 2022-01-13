#include <stdio.h>

int main()
{
	double salario_atual, salario_com_aumento;

	printf("Digite o salario atual: ");
	scanf("%lf", &salario_atual);

	salario_com_aumento = salario_atual + ((salario_atual * 25)/100);

	printf("Valor do salario com aumento: %.2lf", salario_com_aumento);

	return 0;
}
