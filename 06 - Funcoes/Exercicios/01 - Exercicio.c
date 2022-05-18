#include <stdio.h>

int dobro(int* numero)
{
	*numero *= 2;

	return *numero;
}

int main()
{
	int numero;

	printf("Numero que quer dobrar: ");
	scanf("%d", &numero);

	dobro(&numero);

	printf("Numero dobrado: %d", numero);

	return 0;
}
