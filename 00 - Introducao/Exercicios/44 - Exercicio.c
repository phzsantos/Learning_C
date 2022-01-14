#include <stdio.h>

int main()
{
	double altura_degrau, altura_desejada, degraus_para_subir;

	printf("Digite o valor de um degrau: ");
	scanf("%lf", &altura_degrau);

	printf("Altura que quer chegar: ");
	scanf("%lf", &altura_desejada);

	degraus_para_subir = altura_desejada / altura_degrau;

	printf("Degrais para chegar na altura desejada: %.0lf", degraus_para_subir);

	return 0;
}
