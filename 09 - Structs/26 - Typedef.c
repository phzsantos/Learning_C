#include <stdio.h>

int main()
{
	typedef double nota;

	nota prova1, prova2, soma;

	prova1 = 7.0;
	prova2 = 6.0;

	soma = prova1 + prova2;

	printf("Soma: %.2lf", soma);

	return 0;
}
