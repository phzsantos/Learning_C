#include <stdio.h>

int main()
{
	int ano_atual, idade, ano_nascimento;

	printf("Digite a idade atual: ");
	scanf("%d", &idade);
	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual);

	ano_nascimento = (ano_atual - idade);

	printf("Ano do nascimento: %d", ano_nascimento);

	return 0;
}
