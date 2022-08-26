#include <stdio.h>
#include <math.h>

void raizes(float A, float B, float C, float* x1, float* x2)
{
	float delta;

	if (A > 0)
	{
		delta = B * B - 4 * A * C;

		if (delta >= 0)
		{
			if (delta == 0)
			{
				*(x1) = -B / (2 * A);

				printf("raiz unica: %.2f\n", *(x1));
			}
			else
			{
				*(x1) = (-B + sqrt(delta)) / (2 * A);
				*(x2) = (-B - sqrt(delta)) / (2 * A);

				printf("x¹ = %.2f\n", *(x1));
				printf("x² = %.2f\n", *(x2));
			}
		}
		else
		{
			printf("Nao possui raises.\n");
		}
	}
	else
	{
		printf("Valor de A nao pode ser 0.\n");
	}
}

int main()
{
    float A, B, C, x1, x2;

	printf("A: ");
	scanf("%f", &A);

	printf("B: ");
	scanf("%f", &B);

	printf("C: ");
	scanf("%f", &C);

	raizes(A, B, C, &x1, &x2);

    return 0;
}