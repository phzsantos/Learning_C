#include <stdio.h>
#include <math.h>

int main()
{
	double x, y, distancia;

	printf("Digite o valor de x: ");
	scanf("%lf", &x);
	printf("Digite o valor de y: ");
	scanf("%lf", &y);

	distancia = sqrt(pow(x, 2) + pow(y, 2));

	printf("Distancia: %.2lf", distancia);

	return 0;
}
