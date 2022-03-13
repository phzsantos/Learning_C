#include <stdio.h>

int main()
{
	double resistencia, r1, r2;

	do{
		printf("R1: ");
		scanf("%lf", &r1);
		printf("R2: ");
		scanf("%lf", &r2);

		resistencia = r1 * r2 / (r1 + r2);

		printf("Resistencia: %.2lf\n", resistencia);
	}while (r1 && r2);

	return 0;
}
