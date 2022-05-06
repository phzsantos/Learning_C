#include <stdio.h>

int main()
{
	int i, valores[5];

	for (i = 0; i < 5; i++)
	{
		printf("Valor %d: ", i+1);
		scanf("%d", &valores[i]);
	}

	printf("Valores informados:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", valores[i]);
	}

	printf("%p\n", &valores[0]);
	printf("%p\n", valores);

	return 0;
}
