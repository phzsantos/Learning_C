#include <stdio.h>

int main()
{
	int i, valores[50];

	for (i = 0; i < 50; i++)
	{
		valores[i] = ((i + 5) * i) % (i+1);
	}

	for (i = 0; i < 50; i++)
	{
		printf("%d\n", valores[i]);
	}

	return 0;
}
