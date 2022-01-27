#include <stdio.h>

int main()
{
	int i;
	double numeros[3], fila[3];

	for (i = 0; i < 3; i++)
	{
		printf("%dº: ", i+1);
		scanf("%lf", &numeros[i]);
	}

	if (numeros[0] < numeros[1] && numeros[0] < numeros[2])
	{
		fila[0] = numeros[0];

		if (numeros[1] < numeros[2])
		{
			fila[1] = numeros[1];
			fila[2] = numeros[2];
		}
		else
		{
			fila[1] = numeros[2];
			fila[2] = numeros[1];
		}
	}
	else if (numeros[1] < numeros[2])
	{
		fila[0] = numeros[1];

		if (numeros[0] < numeros[2])
		{
			fila[1] = numeros[0];
			fila[2] = numeros[2];
		}
		else
		{
			fila[1] = numeros[2];
			fila[2] = numeros[0];
		}
	}
	else
	{
		fila[0] = numeros[2];

		if (numeros[0] < numeros[1])
		{
			fila[1] = numeros[0];
			fila[2] = numeros[1];
		}
		else
		{
			fila[1] = numeros[1];
			fila[2] = numeros[0];
		}
	}

	printf("Sequencia: %.2lf, %.2lf, %.2lf", fila[0], fila[1], fila[2]);

	return 0;
}
