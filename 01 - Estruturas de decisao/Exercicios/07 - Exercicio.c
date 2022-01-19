#include <stdio.h>

int main()
{
	int primeiro, segundo, maior;

	printf("Digite o primeiro: ");
	scanf("%d", &primeiro);
	printf("Digite o segundo: ");
	scanf("%d", &segundo);

	if (primeiro  == segundo)
	{
		printf("Os numeros são iguais");
	}
	else
	{
		if (primeiro > segundo)
		{
			maior = primeiro;
		}
		else
		{
			maior = segundo;
		}

		printf("Maior: %d\n", maior);
	}

	return 0;
}
