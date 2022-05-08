#include <stdio.h>

int main()
{
	FILE *arquivo;

	arquivo = fopen("teste.txt", "w");

	fclose(arquivo);

	return 0;
}
