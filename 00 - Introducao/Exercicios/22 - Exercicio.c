#include <stdio.h>

int main()
{
	double jardas, metros;

	printf("Valor em jardas que quer converter em metros: ");
	scanf("%lf", &jardas);

	metros = jardas * 0.91;

	printf("%.2lf jardas em metros: %.2lf", jardas, metros);

	return 0;
}
