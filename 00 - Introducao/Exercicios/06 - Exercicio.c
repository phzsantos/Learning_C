#include <stdio.h>

int main()
{
	double fahrenheit, celsius;

	printf("Digite a temperatura em celsius que quer converter em fahrenheit: ");
	scanf("%lf", &celsius);

	fahrenheit = (celsius * 9/5) + 32;

	printf("%.2lf celsius em fahrenheit: %.2lf", celsius, fahrenheit);

	return 0;
}
