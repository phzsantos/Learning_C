#include <stdio.h>

int main()
{
	int idade;

	printf("Qual é a sua idade? ");

	scanf("%d",&idade);

	if (idade < 18)
	{
		printf("Você é menor de idade.\n");
	}
	else if (idade < 60)
	{
		printf("Você é adulto.\n");
	}
	else
	{
		printf("Você é idoso.\n");
	}

	printf("A sua idade é de %d anos\n", idade);

	return 0;
}
