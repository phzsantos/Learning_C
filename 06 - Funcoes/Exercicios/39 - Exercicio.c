#include <stdio.h>

void TrocaValores(int* primeiro, int* segundo)
{
	int troca;

	troca = *primeiro;
	*primeiro = *segundo;
	*segundo = troca;
}

int main()
{
	int primeiro, segundo;

	printf("Primeiro: ");
	scanf("%d", &primeiro);

	printf("Segundo: ");
	scanf("%d", &segundo);

	TrocaValores(&primeiro, &segundo);

	printf("Primeiro: %d\n", primeiro);
	printf("Segundo: %d", segundo);

	return 0;
}
