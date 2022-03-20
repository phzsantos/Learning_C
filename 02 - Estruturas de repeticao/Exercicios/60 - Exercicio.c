#include <stdio.h>

int main()
{
	int numero, soma, qtd, maior, menor, soma_pares, qtd_pares;
	double media, media_pares;

	qtd = 0;
	qtd_pares = 0;
	soma = 0;
	soma_pares = 0;

	printf("Numero: ");
	scanf("%d", &numero);

	maior = numero;
	menor = numero;
	for (qtd = 0; numero; qtd++)
	{
		soma += numero;

		printf("Numero: ");
		scanf("%d", &numero);

		if (numero)
		{
			if (numero > maior)
			{
				maior = numero;
			}
			else if (numero < menor)
			{
				menor = numero;
			}

			if (numero % 2 == 0)
			{
				qtd_pares++;
				soma_pares += numero;
			}
		}
	}

	media = (double) soma / qtd;
	if (qtd_pares)
	{
		media_pares = (double) soma_pares / qtd_pares;
	}
	else
	{
		media_pares = 0;
	}

	printf("Soma: %d\n", soma);
	printf("Quantidade lida: %d\n", qtd);
	printf("Media: %.2lf\n", media);
	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
	printf("Media pares: %.2lf", media_pares);

	return 0;
}
