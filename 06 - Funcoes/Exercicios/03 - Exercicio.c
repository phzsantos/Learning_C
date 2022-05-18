#include <stdio.h>

int VerificaValor(int* numero)
{
	if ((*numero) > 0)
	{
		return 1;
	}
	else if ((*numero) < 0)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int numero, retorno;

	printf("Numero: ");
	scanf("%d", &numero);

	retorno = VerificaValor(&numero);

	printf("Retorno: %d", retorno);

	return 0;
}
