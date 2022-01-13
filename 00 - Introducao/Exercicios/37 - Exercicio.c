#include <stdio.h>

int main()
{
	double produto, valor_com_desconto;

	printf("Digite o valor do produto: ");
	scanf("%lf", &produto);

	valor_com_desconto = produto - ((produto * 12)/100);

	printf("Valor do produto com desconto de 12%: %.2lf", valor_com_desconto);

	return 0;
}
