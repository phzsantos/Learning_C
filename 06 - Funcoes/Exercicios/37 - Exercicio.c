#include <stdio.h>
#include <math.h>

int HiperFatorial(int numero)
{
	int i, hiper_fatorial;

	hiper_fatorial = 1;
	for (i = numero; i > 0; i--)
	{
		hiper_fatorial *= pow(i, i);
	}

	return hiper_fatorial;
}

int main()
{
	int numero, hiper_fatorial;

	printf("Numero: ");
	scanf("%d", &numero);

	hiper_fatorial = HiperFatorial(numero);

	printf("Hiper fatorial: %d", hiper_fatorial);

	return 0;
}
