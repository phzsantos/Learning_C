#include <stdio.h>

int main()
{
	double base_maior, base_menor, altura, area;

	printf("Digite a medida da base maior: ");
	scanf("%lf", &base_maior);
	printf("Digite a medida da base menor: ");
	scanf("%lf", &base_menor);
	printf("Digite a altura: ");
	scanf("%lf", &altura);

	if ((base_maior > 0) && (base_menor > 0) && (altura > 0))
	{
		area = (base_maior + base_menor) * altura / 2;

		printf("Area do trapezio: %.2lf", area);
	}
	else
	{
		printf("Favor informar apenas numeros positivos.");
	}

	return 0;
}
