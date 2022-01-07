#include <stdio.h>

int main()
{
	char nome[50];
	printf("Digite seu nome: ");
	gets(nome);
	printf("%s\n", nome);

	char letras[26];
	int i, contador = 0;
	for (i = 97; i <= 122; i++)
	{
		letras[contador] = i;
		contador++;
	}

	for (i = 0; i < 26; i++)
	{
		printf("%d == %c\n", letras[i], letras[i]);
	}

	int numeros[5];
	numeros[0] = 1;
	numeros[1] = 3;
	numeros[2] = 5;
	numeros[3] = 7;
	numeros[4] = 9;

	double valores[5];
	for (i = 0; i < 5; i++)
	{
		valores[i] = (double) numeros[i] / 2;
	}

	for (i = 0; i < 5; i++)
	{
		printf("%.2lf\n", valores[i]);
	}

	return 0;
}
