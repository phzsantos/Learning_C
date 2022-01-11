#include <stdio.h>

int main()
{
	double jardas, metros;

	printf("Valor em metros que quer converter em jardas: ");
	scanf("%lf", &metros);

	jardas = metros / 0.91;

	printf("%.2lf metros em jardas: %.2lf", metros, jardas);

	return 0;
}
