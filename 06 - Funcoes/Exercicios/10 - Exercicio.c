#include <stdio.h>

int MaiorNumero(int* primeiro, int* segundo)
{
	int maior;

	maior = (*primeiro);
	if ((*segundo) > maior)
	{
		maior = (*segundo);
	}

	return maior;
}

int main()
{
	int primeiro, segundo, maior;

	printf("Primeiro: ");
	scanf("%d", &primeiro);

	printf("Segundo: ");
	scanf("%d", &segundo);

	maior = MaiorNumero(&primeiro, &segundo);

	printf("Maior numero: %d", maior);

	return 0;
}
