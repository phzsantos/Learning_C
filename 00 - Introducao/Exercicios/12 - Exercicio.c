#include <stdio.h>

int main()
{
	int milhas;
	double km;

	printf("Milhas que você quer converter para km: ");
	scanf("%d", &milhas);

	km = milhas * 1.61;

	printf("%d milhas em km: %.0lf", milhas, km);

	return 0;
}
