#include <stdio.h>

void mensagem();
int soma(int numero1, int numero2);

int main()
{
	int primeiro, segundo, resultado;

	mensagem();

	printf("Primeiro numero: ");
	scanf("%d", &primeiro);

	printf("Segundo numero: ");
	scanf("%d", &segundo);

	resultado = soma(primeiro, segundo);

	printf("Resultado da soma entre %d e %d e %d", primeiro, segundo, resultado);

	return 0;
}

void mensagem()
{
	printf("Bem vindo!\n");
}

int soma(int numero1, int numero2)
{
	int resultado = numero1 + numero2;
	return resultado;
}
