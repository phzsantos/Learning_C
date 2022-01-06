#include <stdio.h>

int main()
{
	int primeiro, segundo;
	double resultado;

	printf("Primeiro numero: ");
	scanf("%d", &primeiro);

	printf("Segundo numero: ");
	scanf("%d", &segundo);

	resultado = primeiro + segundo;
	printf("Soma: %.2lf\n",resultado);

	resultado = primeiro - segundo;
	printf("Subtracao: %.2lf\n",resultado);

	resultado = primeiro * segundo;
	printf("Multiplicacao: %.2lf\n",resultado);

	resultado = (double) primeiro / segundo;
	printf("Divisao: %.2lf\n",resultado);

	if (primeiro % 2 == 0)
	{
		printf("Par");
	}
	else
	{
		printf("Impar");
	}

	return 0;
}
