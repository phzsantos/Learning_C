#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;

	do{
		a = 1 + ( rand() % 30);
		b = 1 + ( rand() % 30);
		while (b < a)
		{
			b = 1 + ( rand() % 30);
		}
		c = 1 + ( rand() % 30);
		while(c < b)
		{
			c = 1 + ( rand() % 30);
		}
	}while (a * a + b * b + c * c != 1000);

	printf("a: %d, b: %d, c: %d", a,b,c);

	return 0;
}
