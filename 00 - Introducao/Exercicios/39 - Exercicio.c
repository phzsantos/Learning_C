#include <stdio.h>

int main()
{
	double total, primeiro, segundo, terceiro;

	total = 780000.00;

	primeiro = (total * 46) / 100;

	segundo = (total * 32) / 100;

	terceiro = total - primeiro - segundo;

	printf("Primeiro: %.2lf\nSegundo: %.2lf\nTerceiro: %.2lf", primeiro, segundo, terceiro);

	return 0;
}
