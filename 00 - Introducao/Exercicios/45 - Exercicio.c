#include <stdio.h>

int main()
{
	char letra, minuscula;

	printf("Digite a letra maiuscula que quer converter: ");
	scanf("%c", &letra);

	minuscula = letra + 32;

	printf("Letra minuscula: %c", minuscula);

	return 0;
}
