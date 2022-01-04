#include <stdio.h>

int main()
{
	int i;
	char opcao, nome[50];

	printf("Digite seu nome: ");
	gets(nome);

	printf("Seu nome e: %s \n", nome);

	printf("\nInforme uma opção: \n");
	printf("A - Saldo da conta \n");
	printf("B - Extrato da conta \n");
	printf("C - Limite da conta \n");
	scanf("%c", &opcao);

	if (opcao == 'A')
	{
		printf("Seu saldo e...\n");
	}
	else if (opcao == 'B')
	{
		printf("Extrato da conta...\n");
	}
	else if (opcao == 'C')
	{
		printf("Seu limite e...\n");
	}
	else
	{
		printf("opcao desconhecida\n");
	}

	printf("\n");
	for (i = 97; i <= 122; i++)
	{
		printf("%c", i);
	}

	return 0;
}
