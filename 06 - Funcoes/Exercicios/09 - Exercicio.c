#include <stdio.h>
#include <math.h>

double VolumeCilindro(double* altura, double* raio)
{
	double volume, pi;

	pi = 3.141592;

	volume = pi * pow((*raio), 2) * (*altura);

	return volume;
}

int main()
{
	double raio, altura, volume;

	printf("Raio: ");
	scanf("%lf", &raio);

	printf("Altura: ");
	scanf("%lf", &altura);

	volume = VolumeCilindro(&altura, &raio);

	printf("Volume deste cilindro: %.2lf metros cubicos", volume);

	return 0;
}
