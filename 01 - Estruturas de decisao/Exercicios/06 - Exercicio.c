#include <stdio.h>

int main()
{
	int primeiro, segundo, maior, soma;

	printf("Digite o primeiro: ");
	scanf("%d", &primeiro);
	printf("Digite o segundo: ");
	scanf("%d", &segundo);

	if (primeiro > segundo)
	{
		maior = primeiro;
	}
	else
	{
		maior = segundo;
	}

	soma = primeiro - segundo;

	printf("Maior: %d\n", maior);
	printf("Diferença entre eles: %d", soma);

	return 0;
}
