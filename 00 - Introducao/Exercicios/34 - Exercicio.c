#include <stdio.h>

int main()
{
	double raio, area, pi;

	pi = 3.141592;

	printf("Digite o valor do raio: ");
	scanf("%lf", &raio);

	area = pi * (raio * raio);

	printf("Area do circulo: %.2lf", area);
}
