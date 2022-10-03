#include <stdio.h>
#include <string.h>

int main()
{
    int numero_telefone;
    char nome[50], telefone[9], linha[59];

    FILE *arquivo;
    
    arquivo = fopen("resultado.txt", "w");
    
    do
    {
        printf("Nome: ");
        fgets(nome, 50, stdin);

        printf("Telefone: ");
        scanf("%d", &numero_telefone);
        getchar();

        sprintf(telefone, "%d", numero_telefone);
        sprintf(linha, "%s %s%c", strtok(nome, "\n"), telefone, '\n');

        fputs(linha, arquivo);
    }
    while (numero_telefone);

    fclose(arquivo);

    return 0;
}