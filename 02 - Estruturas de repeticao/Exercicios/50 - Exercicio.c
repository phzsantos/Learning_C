#include <stdio.h>

int main()
{
	int anos;
	double chico, ze;

	chico = 1.50;
	ze = 1.10;

	anos = 0;
	do
	{
		anos++;
		chico += 0.02;
		ze += 0.03;
	}
	while (chico > ze);

	printf("Anos: %d", anos);

	return 0;
}
