#include <stdio.h>

int main()
{
	int meses;
	double carlos, joao;

	carlos = 6000;
	joao = carlos/3;

	meses = 0;
	do
	{
		meses++;
		carlos += carlos * 2 / 100;
		joao += joao * 5 / 100;
	}
	while (joao < carlos);

	printf("Meses: %d", meses);

	return 0;
}
