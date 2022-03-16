#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero, tentativa, numero_tentativas;

	numero = 1 + ( rand() % 1000);

	numero_tentativas = 0;
	do
	{
		numero_tentativas++;
		printf("Chute um numero de 1 a 1000: ");
		scanf("%d", &tentativa);

		if (tentativa > numero)
		{
			printf("O chute foi maior que o numero.\n");
		}
		else if (tentativa < numero)
		{
			printf("O chute foi menor que o numero.\n");
		}
		else
		{
			printf("Voce acertou!\nNumero de tentativas: %d", numero_tentativas);
		}
	}
	while (tentativa != numero);

	return 0;
}
