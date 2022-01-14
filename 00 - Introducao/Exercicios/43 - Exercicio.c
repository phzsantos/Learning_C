#include <stdio.h>

int main()
{
	double valor_base, valor_com_desconto, valor_parcelado, comissao_avista, comissao_parcelado;

	printf("Digite o valor base: ");
	scanf("%lf", &valor_base);

	valor_com_desconto = valor_base - ((valor_base * 10)/100);
	valor_parcelado = valor_base / 3;
	comissao_avista = (valor_com_desconto * 5)/100;
	comissao_parcelado = (valor_base * 5)/100;

	printf("Valor com desconto: %.2lf\nValor de cada parcela: %.2lf\nComissao avista: %.2lf\nComissao parcelado: %.2lf", valor_com_desconto,valor_parcelado,comissao_avista,comissao_parcelado);

	return 0;
}
