#include <stdio.h>
#include <string.h>

int main()
{
    int i, tempo_de_servico;
    char profissao[30];

    FILE *arquivo;

    arquivo = fopen("emp.txt", "w");

    for (i = 0; i < 5; i++)
    {
        printf("Digite sua profissao: ");
        fgets(profissao, 30, stdin);
        profissao[strlen(profissao) - 1] = '\0';

        printf("Digite seu tempo de servico: ");
        scanf("%d", &tempo_de_servico);
        getchar();

        fprintf(arquivo, "%-*s %d\n", 30, profissao, tempo_de_servico);
    }

    fclose(arquivo);

    arquivo = fopen("emp.txt", "r");

    for (i = 0; i < 5; i++)
    {
        fscanf(arquivo, "%s%d", profissao, &tempo_de_servico);
        printf("%-*s %d\n", 30, profissao, tempo_de_servico);
    }

    fclose(arquivo);

    return 0;
}