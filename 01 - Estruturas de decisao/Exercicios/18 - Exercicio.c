#include <stdio.h>

int main()
{
	int operacao;
	double primeiro, segundo, resultado;

	printf("Escolha uma operacao: \n");
	printf("1 - Soma\n");
	printf("2 - Subtracao\n");
	printf("3 - Multiplicacao\n");
	printf("4 - Divisao\n");
	scanf("%d", &operacao);

	printf("\n");
	printf("Digite o primeiro valor: ");
	scanf("%lf", &primeiro);
	printf("Digite o segundo valor: ");
	scanf("%lf", &segundo);

	switch (operacao)
	{
		case 1:
			resultado = primeiro + segundo;
			break;
		case 2:
			resultado = primeiro - segundo;
			break;
		case 3:
			resultado = primeiro * segundo;
			break;
		case 4:
			resultado = primeiro / segundo;
			break;
	}

	printf("Resultado: %.2lf", resultado);

	return 0;
}
