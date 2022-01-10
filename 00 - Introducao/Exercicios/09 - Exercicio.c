#include <stdio.h>

int main()
{
	double celsius, kelvin;

	printf("Digite a temperatura em celsius que quer converter em kelvin: ");
	scanf("%lf", &celsius);

	kelvin = celsius + 273.15;

	printf("%.2lf celsius em kelvin: %.2lf", celsius, kelvin);

	return 0;
}
