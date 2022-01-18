#include <stdio.h>

int main()
{
	double primeiro, segundo, maior;

	printf("Digite o primeiro numero: ");
	scanf("%lf", &primeiro);
	printf("Digite o segundo numero: ");
	scanf("%lf", &segundo);

	if (primeiro > segundo)
	{
		maior = primeiro;
	}
	else
	{
		maior = segundo;
	}

	printf("Esse e o maior numero: %.2lf", maior);

	return 0;
}
