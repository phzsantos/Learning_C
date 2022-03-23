#include <stdio.h>

int main()
{
	int numero, temporario, numero_invertido, i, j, maior_palindromo;

	maior_palindromo = 0;
	for (i = 100; i < 1000; i++)
	{
		for (j = i; j < 1000; j++)
		{
			numero = i * j;

			if (numero > maior_palindromo)
			{
				numero_invertido = 0;

				for (temporario = numero; temporario > 0; temporario /= 10)
				{
					numero_invertido = numero_invertido * 10 + temporario % 10;
				}

				if (numero_invertido == numero)
				{
					maior_palindromo = numero;
				}
			}
		}
	}

	printf("Maior palindromo: %d", maior_palindromo);

    return 0;
}
