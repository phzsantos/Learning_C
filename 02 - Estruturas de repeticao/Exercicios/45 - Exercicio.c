#include <stdio.h>

int main()
{
	int opcao;
	double km, metros;

	do
	{
		printf("1 - km/h to m/s\n");
		printf("2 - m/s to km/h\n");
		printf("3 - Exit\n");
		printf("Opcao escolhida(1,2,3): ");
		scanf("%d", &opcao);

		if (opcao == 1)
		{
			printf("Valor em km/h: ");
			scanf("%lf", &km);

			metros = km / 3.6;

			printf("Resultado: %.2lf m/s\n", metros);
		}
		else if (opcao == 2)
		{
			printf("Valor em m/s: ");
			scanf("%lf", &metros);

			km = metros * 3.6;

			printf("Resultado: %.2lf km/h\n", km);
		}
		else
		{
			printf("Programa finalizado.");
		}
	}
	while (opcao != 3);

	return 0;
}
