#include <stdio.h>

int main()
{
	int numero, soma;

	printf("Digite um numero: ");
	scanf("%d", &numero);

	soma = ((numero*3)+1) + ((numero*2)-1);

	printf("Soma: %d", soma);

	return 0;
}
