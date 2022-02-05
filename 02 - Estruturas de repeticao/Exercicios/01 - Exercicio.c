#include <stdio.h>

int main()
{
	int i, j, multiplos;

	i = 0;
	j = 0;
	multiplos = 0;
	while (multiplos < 5)
	{
		i++;

		if (i % 3 == 0)
		{
			j++;
			printf("%d Multiplo de 3: %d\n", j, i);
			multiplos++;
		}
	}

	return 0;
}
