#include <stdio.h>

int main()
{
	int n, i, j, tamanho_vetor, auxiliar1, auxiliar2;

	printf("Quantidade de colunas: ");
	scanf("%d", &n);

	for (i = 0; i < n+1; i++)
	{
		tamanho_vetor += i;
	}

	int triangulo[tamanho_vetor];

	for (i = 0; i < tamanho_vetor; i++)
	{
		triangulo[i] = 0;
	}

	triangulo[0] = 1;
	for (i = 0; i < n; i++)
	{
		auxiliar1 = 0;
		for (j = 0; j <= i; j++)
		{
			auxiliar2 = auxiliar1 + triangulo[j];
			auxiliar1 = triangulo[j];
			triangulo[j] = auxiliar2;
			printf("%d ", triangulo[j]);
		}
		printf("\n");
	}

	return 0;
}
