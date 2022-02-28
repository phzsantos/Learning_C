#include <stdio.h>

int main()
{
	int n, i, primeiro, segundo, contador;

	printf("Quantidade a ser mostrada: ");
	scanf("%d", &n);
	printf("Primeiro divisor: ");
	scanf("%d", &primeiro);
	printf("Segundo divisor: ");
	scanf("%d", &segundo);

	contador = 0;
	for (i = 0; contador < n; i++)
	{
		if (i % primeiro == 0 || i % segundo == 0)
		{
			contador++;
			if (contador < n)
			{
				printf("%d,", i);
			}
			else
			{
				printf("%d", i);
			}
		}
	}

	return 0;
}
