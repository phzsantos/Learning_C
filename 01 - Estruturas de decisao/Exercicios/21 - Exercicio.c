#include <stdio.h>

int main()
{
	int opcao;
	double primeiro, segundo, resultado;

	printf("Escolha a opcao: \n");
	printf("1 - Soma de 2 numeros\n");
	printf("2 - Diferenca entre 2 numeros\n");
	printf("3 - Produto entre 2 numeros\n");
	printf("4 - Divisao entre 2 numeros\n");
	scanf("%d", &opcao);

	printf("Digite o primeiro numero: ");
	scanf("%lf", &primeiro);
	printf("Digite o segundo numero: ");
	scanf("%lf", &segundo);

	switch (opcao)
	{
		case 1:
			resultado = primeiro + segundo;
			break;
		case 2:
			if (primeiro < segundo)
			{
				resultado = segundo - primeiro;
			}
			else
			{
				resultado = primeiro - segundo;
			}
			break;
		case 3:
			resultado = primeiro * segundo;
			break;
		case 4:
			if (segundo != 0)
			{
				resultado = primeiro / segundo;
			}
			else
			{
				printf("Nao existe divisao por zero.\n");
				resultado = 0;
			}
			break;
	}

	printf("Resultado: %.2lf", resultado);

	return 0;
}
