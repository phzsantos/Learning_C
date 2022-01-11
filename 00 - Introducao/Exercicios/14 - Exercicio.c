#include <stdio.h>

int main()
{
	double graus,radianos;

	printf("Graus para radianos: ");
	scanf("%lf", &graus);

	radianos = graus * 3.14/180;

	printf("%.2lf graus em radianos: %.2lf", graus, radianos);

	return 0;
}
