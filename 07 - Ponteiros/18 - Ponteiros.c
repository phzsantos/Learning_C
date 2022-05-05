#include <stdio.h>

void incremento(int* valor)
{
	printf("Valor incrementado: %d\n", ++(*valor));
	printf("Endereco de memeoria: %p\n", valor);
}

int main()
{
	int contador;

	contador = 10;

	printf("Valor do contador antes: %d\n", contador);
	printf("Endereco de memeoria: %p\n", &contador);

	incremento(&contador);

	printf("Valor do contador depois: %d\n", contador);
	printf("Endereco de memeoria: %p\n", &contador);

	return 0;
}
