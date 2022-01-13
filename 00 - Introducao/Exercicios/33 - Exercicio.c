#include <stdio.h>

int main()
{
	double lado, area;

	printf("Digite o valor do lado do quadrado: ");
	scanf("%lf", &lado);

	area = lado * lado;

	printf("Area do quadrado: %.2lf", area);

	return 0;
}
