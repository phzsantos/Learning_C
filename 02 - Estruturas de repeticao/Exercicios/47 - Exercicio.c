#include <stdio.h>

int main()
{
	int opcao;
	double primeiro, segundo, resultado;

	do
	{
		printf("1 - Adicao\n");
		printf("2 - Subtracao\n");
		printf("3 - Multiplicacao\n");
		printf("4 - Divisao\n");
		printf("5 - Exit\n");
		printf("Opcao escolhida: ");
		scanf("%d", &opcao);

		if (opcao == 1)
		{
			printf("Primeiro: ");
			scanf("%lf", &primeiro);
			printf("Segundo: ");
			scanf("%lf", &segundo);

			resultado = primeiro + segundo;

			printf("Resultado: %.2lf\n", resultado);
		}
		else if (opcao == 2)
		{
			printf("Primeiro: ");
			scanf("%lf", &primeiro);
			printf("Segundo: ");
			scanf("%lf", &segundo);

			resultado = primeiro - segundo;

			printf("Resultado: %.2lf\n", resultado);
		}
		else if (opcao == 3)
		{
			printf("Primeiro: ");
			scanf("%lf", &primeiro);
			printf("Segundo: ");
			scanf("%lf", &segundo);

			resultado = primeiro * segundo;

			printf("Resultado: %.2lf\n", resultado);
		}
		else if (opcao == 4)
		{
			printf("Primeiro: ");
			scanf("%lf", &primeiro);
			printf("Segundo: ");
			scanf("%lf", &segundo);

			resultado = primeiro / segundo;

			printf("Resultado: %.2lf\n", resultado);
		}
		else
		{
			printf("Programa finalizado.");
		}
	}
	while (opcao != 5);

	return 0;
}
