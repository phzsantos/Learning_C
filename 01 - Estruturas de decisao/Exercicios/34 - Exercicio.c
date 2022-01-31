#include <stdio.h>

int main()
{
	int faltas;
	double nota;

	printf("Nota: ");
	scanf("%lf", &nota);
	printf("Faltas: ");
	scanf("%d", &faltas);

	if (nota >= 0 && faltas >= 0)
	{
		if (faltas <= 20)
		{
			if (nota <= 3.9)
			{
				printf("E");
			}
			else if (nota <= 4.9)
			{
				printf("D");
			}
			else if (nota <= 7.4)
			{
				printf("C");
			}
			else if (nota <= 8.9)
			{
				printf("B");
			}
			else
			{
				printf("A");
			}
		}
		else
		{
			if (nota <= 3.9)
			{
				printf("E");
			}
			else if (nota <= 4.9)
			{
				printf("E");
			}
			else if (nota <= 7.4)
			{
				printf("D");
			}
			else if (nota <= 8.9)
			{
				printf("C");
			}
			else
			{
				printf("B");
			}
		}
	}
	else
	{
		printf("Favor digitar apenas valores validos (maiores que 0)");
	}

	return 0;
}
