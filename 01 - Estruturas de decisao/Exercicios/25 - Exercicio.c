#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	double delta, numeros[3], x1, x2;

	for (i = 0; i < 3; i++)
	{
		printf("Digite o %d valor: ", i+1);
		scanf("%lf", &numeros[i]);
	}

	if (numeros[0] > 0)
	{
		delta = numeros[1] * numeros[1] - 4 * numeros[0] * numeros[2];

		if (delta >= 0)
		{
			if (delta == 0)
			{
				x1 = -numeros[1] / (2 * numeros[0]);

				printf("raiz unica: %.2lf", x1);
			}
			else
			{
				x1 = (-numeros[1] + sqrt(delta)) / (2 * numeros[0]);
				x2 = (-numeros[1] - sqrt(delta)) / (2 * numeros[0]);

				printf("x¹ = %.2lf\n", x1);
				printf("x² = %.2lf", x2);
			}
		}
		else
		{
			printf("Nao possui raises.");
		}
	}
	else
	{
		printf("Valor de A nao pode ser 0.");
	}

	return 0;
}
