#include <stdio.h>

int main()
{
	int anos;
	double salario, aumento;

	anos = 1996;
	salario = 2000;
	aumento = 1.5;

	salario += salario * aumento / 100;
	do
	{
		anos++;
		aumento *= 2;
		salario += salario * aumento / 100;
	}
	while (anos < 2022);

	printf("Salario atual: %.2lf", salario);

	return 0;
}
