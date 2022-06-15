#include <stdio.h>

void RecebeCaracteres(char* vetor, int* tamanho)
{
	int i;

	i = 0;
	do
	{
		i++;
		*((vetor+i)-1) = getchar();
		getchar();
	}
	while (*((vetor+i)-1) != '\n' && i < (*tamanho-1));

	*(vetor+(*tamanho-1)) = '\0';
}

int main()
{
	int tamanho;

	printf("Tamanho: ");
	scanf("%d", &tamanho);
	getchar();

	char vetor[tamanho];

	RecebeCaracteres(&vetor[0], &tamanho);

	printf("%s", vetor);

	return 0;
}
