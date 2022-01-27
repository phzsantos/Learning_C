#include <stdio.h>
#include <math.h>

int main()
{
	int numeros[3], i, opcao;
	double resultado;

	for (i = 0; i < 3; i++)
	{
		printf("%dº: ", i+1);
		scanf("%d", &numeros[i]);
	}

	if (numeros[0] > 0 && numeros[1] > 0 && numeros[2] > 0)
	{
		printf("1 - Geometrica\n");
		printf("2 - Ponderada\n");
		printf("3 - Harmonica\n");
		printf("4 - Aritmetica\n");
		scanf("%d", &opcao);

		switch (opcao)
		{
			case 1:
				resultado = cbrt(numeros[0] * numeros[1] * numeros[2]);
				break;
			case 2:
				resultado = (numeros[0] + 2 * numeros[1] + 3 * numeros[2])/6;
				break;
			case 3:
				resultado = 1 / ((1/numeros[0]) + (1/numeros[1]) + (1/numeros[2]));
				break;
			case 4:
				resultado = (numeros[0] + numeros[1] + numeros[2]) / 3;
				break;
			default:
				printf("Opcao invalida.");
		}

		printf("Resultado: %.2lf", &resultado);
	}
	else
	{
		printf("Favor digitar apenas numeros positivos.");
	}

	return 0;
}
