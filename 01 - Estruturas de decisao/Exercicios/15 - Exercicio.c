#include <stdio.h>

int main()
{
	int numero;

	printf("Digite um numero: ");
	scanf("%d", &numero);

	switch (numero)
	{
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("Segundo feira");
			break;
		case 3:
			printf("Terca feira");
			break;
		case 4:
			printf("Quarta feira");
			break;
		case 5:
			printf("Quinta feira");
			break;
		case 6:
			printf("Sexta feira");
			break;
		case 7:
			printf("Sabado");
			break;
		default:
			printf("Numero invalido, tente um entre 1 e 7.");
	}

	return 0;
}
