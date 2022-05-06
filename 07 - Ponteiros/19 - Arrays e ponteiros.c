#include <stdio.h>

int main()
{
	int i, valores[5] = {1 , 2, 3, 4, 5};

	printf("Valores informados:\n");
	for (i = 0; i < 5; i++)
	{
		printf("Valor %d tamanho %ld bytes\n", valores[i], sizeof(valores[i]));
	}
	printf("Tamanho do vetor %ld bytes\n", sizeof(valores));

	printf("%p\n", &valores[0]);
	printf("%p\n", valores);

	printf("valores[0] vale %d e endereco de memoria e %p\n", valores[0], &valores[0]);
	printf("*(valores) vale %d e endereco de memoria e %p\n", *(valores), *(valores));

	printf("*(valores+1) vale %d e endereco de memoria e %p\n", *(valores+1), *(valores+1));
	printf("*(valores+2) vale %d e endereco de memoria e %p\n", *(valores+2), *(valores+2));
	printf("*(valores+3) vale %d e endereco de memoria e %p\n", *(valores+3), *(valores+3));
	printf("*(valores+4) vale %d e endereco de memoria e %p\n", *(valores+4), *(valores+4));

	return 0;
}
