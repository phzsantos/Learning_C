#include <stdio.h>

int main()
{
	int i;

	for (i = 1; i < 101; i++)
	{
		printf("%d", i);
	}

	printf("\n");
	i = 0;
	while (i < 100)
	{
		i++;
		printf("%d", i);
	}

	printf("\n");
	i = 0;
	do
	{
		i++;
		printf("%d", i);
	}
	while (i < 100);

	return 0;
}
