#include <stdio.h>

int main()
{
	int idade, tempo_servico;

	printf("Idade: ");
	scanf("%d", &idade);
	printf("Tempo de servico: ");
	scanf("%d", &tempo_servico);

	if ((idade >= 65) || (tempo_servico >= 30) || (idade >= 60 && tempo_servico >= 25))
	{
		printf("Pode aposentar.");
	}
	else
	{
		printf("Nao pode aposentar.");
	}

	return 0;
}
