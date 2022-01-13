#include <stdio.h>
#include <math.h>

int main()
{
	double cateto_oposto, cateto_adjacente, hipotenusa;

	printf("Digite o valor do cateto oposto: ");
	scanf("%lf", &cateto_oposto);

	printf("Digite o valor do cateto adjacente: ");
	scanf("%lf", &cateto_adjacente);

	hipotenusa = sqrt(pow(cateto_oposto, 2.0) + pow(cateto_adjacente, 2.0));

	printf("Hipotenusa = %.2lf", hipotenusa);

	return 0;
}
