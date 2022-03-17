#include <stdio.h>

int main()
{
	int notas1, notas2, notas5, notas10, notas20, notas50, notas100;
	double valor;

	notas1 = 0;
	notas2 = 0;
	notas5 = 0;
	notas10 = 0;
	notas20 = 0;
	notas50 = 0;
	notas100 = 0;

	printf("Valor: ");
	scanf("%lf", &valor);

	while (valor > 0)
	{
		while (valor >= 100)
		{
			notas100++;
			valor -= 100;
		}

		if (valor >= 50)
		{
			notas50++;
			valor -= 50;
		}
		else if (valor >= 20)
		{
			notas20++;
			valor -= 20;
		}
		else if (valor >= 10)
		{
			notas10++;
			valor -= 10;
		}
		else if (valor >= 5)
		{
			notas5++;
			valor -= 5;
		}
		else if (valor >= 2)
		{
			notas2++;
			valor -= 2;
		}
		else if (valor >= 1)
		{
			notas1++;
			valor -= 1;
		}
	}

	printf("Notas de 100: %d\n", notas100);
	printf("Notas de 50: %d\n", notas50);
	printf("Notas de 20: %d\n", notas20);
	printf("Notas de 10: %d\n", notas10);
	printf("Notas de 5: %d\n", notas5);
	printf("Notas de 2: %d\n", notas2);
	printf("Notas de 1: %d\n", notas1);

	return 0;
}
