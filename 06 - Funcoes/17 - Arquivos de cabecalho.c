#include <stdio.h>
#include "ajuda.h"

int main()
{
	int primeiro, segundo, resultado_soma, resultado_multiplicacao;

	mensagem();

	printf("Primeiro: ");
	scanf("%d", &primeiro);

	printf("Segundo: ");
	scanf("%d", &segundo);

	resultado_soma = soma(primeiro, segundo);
	printf("Soma: %d\n", resultado_soma);

	resultado_multiplicacao = multiplicacao(primeiro, segundo);
	printf("Multiplicacao: %d", resultado_multiplicacao);

	return 0;
}
