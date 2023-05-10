#include <stdio.h>
#include <string.h>

int main()
{
    int i, numero_de_alunos;
    double nota;
    char nome[40];

    FILE *arquivo;

    printf("Digite o numero de alunos: ");
    scanf("%d", &numero_de_alunos);
    getchar();

    char nomes[numero_de_alunos][41];
    double notas[numero_de_alunos];

    for (i = 0; i < numero_de_alunos; i++)
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(nome, 40, stdin);

        printf("Digite a nota do aluno %d: ", i + 1);
        scanf(" %lf", &nota);
        getchar();

        nomes[i][0] = '\0';
        strncat(nomes[i], nome, strlen(nome) - 1);

        notas[i] = nota;
    }

    arquivo = fopen("notas.txt", "w");

    for (i = 0; i < numero_de_alunos; i++)
    {
        fprintf(arquivo, "%-*s %.2lf\n", 40, nomes[i], notas[i]);
    }

    fclose(arquivo);

    return 0;
}