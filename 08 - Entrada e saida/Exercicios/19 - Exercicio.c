#include <stdio.h>
#include <string.h>

int main()
{
    int nota, maior_nota;
    char linha[50], nome[40], nome_maior_nota[40];

    FILE *arquivo;

    arquivo = fopen("notas.txt", "r");

    fgets(linha, 50, arquivo);
    sscanf(linha, "NOME: %s NOTA: %d", nome_maior_nota, &maior_nota);
    while (!feof(arquivo))
    {
        fgets(linha, 50, arquivo);
        sscanf(linha, "NOME: %s NOTA: %d", nome, &nota);
        if (nota > maior_nota)
        {
            maior_nota = nota;
            strcpy(nome_maior_nota, nome);
        }
    }

    fclose(arquivo);

    printf("Aluno com maior nota foi: %s, com %d pontos\n", nome_maior_nota, maior_nota);

    return 0;
}