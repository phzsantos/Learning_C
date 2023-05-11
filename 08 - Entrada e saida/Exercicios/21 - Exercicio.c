#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char nome[40];
    double nota;
} 
Aluno;

int main() 
{
    int i, numero_de_alunos;
    double maior_nota;
    
    Aluno alunos[40], aluno_maior_nota;

    FILE *arquivo;

    printf("Digite o numero de alunos: ");
    scanf("%d", &numero_de_alunos);

    for (i = 0; i < numero_de_alunos; i++) 
    {
        getchar();
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, 40, stdin);

        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%lf", &alunos[i].nota);
    }

    arquivo = fopen("alunos.bin", "wb");

    fwrite(alunos, sizeof(Aluno), numero_de_alunos, arquivo);

    fclose(arquivo);

    arquivo = fopen("alunos.bin", "rb");

    maior_nota = -1;
    for (i = 0; i < numero_de_alunos; i++) 
    {
        Aluno aluno;
        fread(&aluno, sizeof(Aluno), 1, arquivo);

        if (aluno.nota > maior_nota) 
        {
            aluno_maior_nota = aluno;
            maior_nota = aluno.nota;
        }
    }

    fclose(arquivo);

    printf("Aluno com a maior nota: %s - %.2lf\n", strtok(aluno_maior_nota.nome, "\n"), aluno_maior_nota.nota);

    return 0;
}