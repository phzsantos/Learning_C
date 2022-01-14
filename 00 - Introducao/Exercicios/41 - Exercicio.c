#include <stdio.h>

int main()
{
	int horas_trabalhadas;
	double valor_hora, salario;

	printf("Digite o valor do valor hora: ");
	scanf("%lf", &valor_hora);

	printf("Digite quantas horas foram trabalhadas: ");
	scanf("%d", &horas_trabalhadas);

	salario = (valor_hora * horas_trabalhadas) + (((valor_hora * horas_trabalhadas) * 10)/100);

	printf("Valor a ser pago: %.2lf", salario);

	return 0;
}
