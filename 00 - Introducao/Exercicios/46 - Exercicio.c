#include <stdio.h>

int main()
{
	int numero_base, convertido, primeiro, segundo, terceiro;

	printf("Digite o numero base: ");
	scanf("%d", &numero_base);

	primeiro = (numero_base % 10) * 100;
	terceiro = numero_base / 100;
	segundo = ((numero_base / 10) - (terceiro * 10)) * 10;

	convertido = primeiro + segundo + terceiro;

	printf("Numero invertido: %d", convertido);

	return 0;
}
