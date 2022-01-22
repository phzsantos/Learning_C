#include <stdio.h>

int main()
{
	int i;
	double lados[3];

	for (i = 0; i < 3; i++)
	{
		printf("Digite o valor do %dº lado: ", i+1);
		scanf("%lf", &lados[i]);
	}

	if ((lados[0] < lados[1] + lados[2]) && (lados[1] < lados[0] + lados[2]) && (lados[2] < lados[0] + lados[1]))
	{
		if ((lados[0] == lados[1]) && (lados[1] == lados[2]))
		{
			printf("Seu triangulo e equilatero");
		}
		else if ((lados[0] == lados[1]) || (lados[1] == lados[2]) || (lados[0] == lados[2]))
		{
			printf("Seu triangulo e isosceles");
		}
		else
		{
			printf("Seu triangulo e escaleno");
		}
	}
	else
	{
		printf("Nao e um triangulo.");
	}

	return 0;
}
