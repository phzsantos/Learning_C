#include <stdio.h>
#include <math.h>

double VolumeEsfera(double* raio)
{
	double volume, pi;

	pi = 3.14159;

	volume = (4 * pi * pow(*raio, 3))/3;

	return volume;
}

int main()
{
	double raio, volume;

	printf("Raio: ");
	scanf("%lf", &raio);

	volume = VolumeEsfera(&raio);

	printf("Volume desta esfera: %.2lf", volume);

	return 0;
}
