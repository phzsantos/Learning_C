#include <stdio.h>
#include <math.h>

int main()
{
	double valor, cubo, quadrado, raiz;

	printf("Valor: ");
	scanf("%lf", &valor);

	while (valor > 0)
	{
		cubo = valor * valor * valor;
		quadrado = valor * valor;
		raiz = sqrt(valor);

		printf("Cubo: %.2lf\n", cubo);
		printf("Quadrado: %.2lf\n", quadrado);
		printf("Raiz: %.2lf\n", raiz);

		printf("Valor: ");
		scanf("%lf", &valor);
	}

	return 0;
}
