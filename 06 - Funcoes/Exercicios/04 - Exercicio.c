#include <stdio.h>
#include <math.h>

int VerificaQuadradoPerfeito(int* numero)
{
	int raiz;

	raiz = sqrt(*numero);

	if ((raiz * raiz) == (*numero))
	{
		return 1;
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

	retorno = VerificaQuadradoPerfeito(&numero);

	if (retorno == 1)
	{
		printf("Quadrado perfeito.");
	}
	else
	{
		printf("Nao e quadrado perfeito.");
	}

	return 0;
}
