#include <stdio.h>
#include <string.h>

struct st_aluno
{
	char matricula[10];
	char nome[100];
	char curso[50];
	int ano_nascimento;
}/*aluno1*/;/* Pode ser declarado desse jeito tbm*/

int main()
{
	struct st_aluno aluno1;

	printf("Matricula: ");
	fgets(aluno1.matricula, 10, stdin);
	printf("Nome: ");
	fgets(aluno1.nome, 100, stdin);
	printf("Curso: ");
	fgets(aluno1.curso, 50, stdin);
	printf("Ano de nascimento: ");
	scanf("%d", &aluno1.ano_nascimento);

	printf("======== Dados do aluno ========\n");
	printf("Matricula: %s\n", aluno1.matricula);
	printf("Nome: %s\n", aluno1.nome);
	printf("Curso: %s\n", aluno1.curso);
	printf("Ano de nascimento: %d\n", aluno1.ano_nascimento);

	return 0;
}
