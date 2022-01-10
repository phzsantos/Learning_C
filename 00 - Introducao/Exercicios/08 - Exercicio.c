#include <stdio.h>

int main()
{
	double celsius, kelvin;

	printf("Digite a temperatura em kelvin que quer converter em celsius: ");
	scanf("%lf", &kelvin);

	celsius = kelvin - 273.15;

	printf("%.2lf kelvin em celsius: %.2lf", kelvin, celsius);

	return 0;
}
