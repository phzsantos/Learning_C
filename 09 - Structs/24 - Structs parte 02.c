#include <stdio.h>
#include <string.h>

struct st_aluno
{
	char matricula[10];
	char nome[100];
	char curso[50];
	int ano_nascimento;
}/*alunos[5]*/;/* Pode ser declarado desse jeito tbm*/

int main()
{
	int i;
	struct st_aluno alunos[5];

	for (i = 0; i < 5; i++)
	{
		printf("Matricula: ");
		fgets(alunos[i].matricula, 10, stdin);
		printf("Nome: ");
		fgets(alunos[i].nome, 100, stdin);
		printf("Curso: ");
		fgets(alunos[i].curso, 50, stdin);
		printf("Ano de nascimento: ");
		scanf("%d", &alunos[i].ano_nascimento);
		getchar();
	}

	for (i = 0; i < 5; i++)
	{
		printf("======== Dados do aluno ========\n");
		printf("Matricula: %s\n", alunos[i].matricula);
		printf("Nome: %s\n", alunos[i].nome);
		printf("Curso: %s\n", alunos[i].curso);
		printf("Ano de nascimento: %d\n", alunos[i].ano_nascimento);
	}

	return 0;
}
