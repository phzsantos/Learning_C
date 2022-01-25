#include <stdio.h>

int main()
{
	int ano;

	printf("Ano: ");
	scanf("%d", &ano);

	if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
	{
		printf("Ano e bissexto.");
	}
	else
	{
		printf("Ano nao e bissexto.");
	}

	return 0;
}
