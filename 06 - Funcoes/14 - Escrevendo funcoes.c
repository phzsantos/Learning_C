#include <stdio.h>

void mensagem()
{
	printf("Bem vindo!");
}

int soma(int numero1, int numero2)
{
	int resultado = numero1 + numero2;
	return resultado;
}

void proximo_char(char caractere)
{
	printf("%c", caractere+1);
}

int main()
{
	printf("Ola!");

	return 0;
}
