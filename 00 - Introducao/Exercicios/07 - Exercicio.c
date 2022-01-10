#include <stdio.h>

int main()
{
	double fahrenheit, celsius;

	printf("Digite a temperatura em fahrenheit que quer converter em celsius: ");
	scanf("%lf", &fahrenheit);

	celsius = ((fahrenheit - 32) * 5)/9;

	printf("%.2lf fahrenheit em celsius: %.2lf", fahrenheit, celsius);

	return 0;
}
