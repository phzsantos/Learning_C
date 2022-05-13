#include <stdio.h>
#include <string.h>

struct st_contato
{
	char nome[100];
	int ano_nascimento;
	char telefone[20];
	char email[100];
};

struct st_agenda
{
	struct st_contato contatos[100];
}agenda;

int main()
{
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("Nome: ");
		fgets(agenda.contatos[i].nome, 100, stdin);
		printf("Telefone: ");
		fgets(agenda.contatos[i].telefone, 20, stdin);
		printf("Email: ");
		fgets(agenda.contatos[i].email, 50, stdin);
		printf("Ano de nascimento: ");
		scanf("%d", &agenda.contatos[i].ano_nascimento);
		getchar();
	}

	printf("============== Agenda ==============\n");
	for (i = 0; i < 3; i++)
	{
		printf("======== Dados do contato %d ========\n", (i+1));
		printf("Nome: %s\n", strtok(agenda.contatos[i].nome, "\n"));
		printf("Telefone: %s\n", strtok(agenda.contatos[i].telefone, "\n"));
		printf("Email: %s\n", strtok(agenda.contatos[i].email, "\n"));
		printf("Ano de nascimento: %d\n", agenda.contatos[i].ano_nascimento);
	}

	return 0;
}
