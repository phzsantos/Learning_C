#include <stdio.h>

int main()
{
	double raio, altura, volume, pi;

	pi = 3.141592;

	printf("Digite o valor do raio: ");
	scanf("%lf", &raio);

	printf("Digite o valor da altura: ");
	scanf("%lf", &altura);

	volume = pi * (raio * raio) * altura;

	printf("Volume do cilindro: %.2lf", volume);

	return 0;
}
