#include <stdio.h>

int main()
{
	int numero;

	printf("Digite um numero: ");
	scanf("%d", &numero);

	printf("Antecessor: %d, sucessor: %d", numero-1, numero+1);

	return 0;
}
