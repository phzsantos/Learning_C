#include <stdio.h>

int main()
{
	int km;
	double milhas;

	printf("km que você quer converter em milhas: ");
	scanf("%d", &km);

	milhas = km / 1.61;

	printf("%d km em milhas: %.0lf", km, milhas);

	return 0;
}
