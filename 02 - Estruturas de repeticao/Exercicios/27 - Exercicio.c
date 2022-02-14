#include <stdio.h>

int main()
{
	int i, numero;
	double harmonico;

	printf("Numero: ");
	scanf("%d", &numero);

	harmonico = 1;
	for (i = 2; i <= numero; i++)
	{
		harmonico = harmonico + (double) 1/i;
	}

	printf("%d Harmonico: %.2lf", numero, harmonico);

	return 0;
}
