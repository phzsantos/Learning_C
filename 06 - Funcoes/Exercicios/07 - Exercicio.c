#include <stdio.h>

double CelsiusParaFahrenheit(double* celsius)
{
	double fahrenheit;

	fahrenheit = (*celsius) * 9/5 + 32;

	return fahrenheit;
}

int main()
{
	double celsius, fahrenheit;

	printf("Celsius: ");
	scanf("%lf", &celsius);

	fahrenheit = CelsiusParaFahrenheit(&celsius);

	printf("Celsius em fahrenheit: %.2lf", fahrenheit);

	return 0;
}
