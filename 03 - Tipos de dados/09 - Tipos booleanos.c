#include <stdio.h>

int main()
{
	int boolean = 1;

	if (boolean)
	{
		printf("Verdadeiro\n");
	}
	else
	{
		printf("Falso\n");
	}

	boolean = 0;

	if (boolean)
	{
		printf("Verdadeiro\n");
	}
	else
	{
		printf("Falso\n");
	}

	return 0;
}
