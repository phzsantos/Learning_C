#include <stdio.h>

int main()
{
	char sexo;
	double altura, peso_ideal;

	printf("Digite o sexo: ");
	scanf("%c", &sexo);
	printf("Digite a altura: ");
	scanf("%lf", &altura);

	if (sexo == 'm')
	{
		peso_ideal = (72.7 * altura) - 58;
	}
	else
	{
		peso_ideal = (62.1 * altura) - 44.7;
	}

	printf("Peso ideal para sua altura e para seu sexo e: %.2lf", peso_ideal);

	return 0;
}
