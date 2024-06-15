#include <stdio.h>
#include <ctype.h>

// isalnum - verifica se o caractere é alfanumérico (abc...z, ABC...Z, 0...9)
// isalpha - verifica se o caractere é alfabético (abc...z)
// isdigit - verifica se o caractere é um dígito (0...9)
// ispunct - verifica se o caractere é um caractere de pontuação (?, !, ., ...)
// isspace - verifica se o caractere é um caractere de espaço (espaço, tabulação, nova linha, ...)
// isupper - verifica se o caractere é uma letra maiúscula (ABC...Z)
// islower - verifica se o caractere é uma letra minúscula (abc...z)
// tolower - converte o caractere para minúscula
// toupper - converte o caractere para maiúscula

int main()
{
    char teste = 'c';

    if (isalnum(teste))
    {
        printf("É alfanumérico\n");
    }
    else
    {
        printf("Não é alfanumérico\n");
    }

    if (isalpha(teste))
    {
        printf("É alfabético\n");
    }
    else
    {
        printf("Não é alfabético\n");
    }

    if (isdigit(teste))
    {
        printf("É um dígito\n");
    }
    else
    {
        printf("Não é um dígito\n");
    }

    if (ispunct(teste))
    {
        printf("É um caractere de pontuação\n");
    }
    else
    {
        printf("Não é um caractere de pontuação\n");
    }

    if (isspace(teste))
    {
        printf("É um caractere de espaço\n");
    }
    else
    {
        printf("Não é um caractere de espaço\n");
    }

    if (isupper(teste))
    {
        printf("É uma letra maiúscula\n");
    }
    else
    {
        printf("Não é uma letra maiúscula\n");
    }

    if (islower(teste))
    {
        printf("É uma letra minúscula\n");
    }
    else
    {
        printf("Não é uma letra minúscula\n");
    }

    printf("Converte para minúscula: %c\n", tolower(teste));

    printf("Converte para maiúscula: %c\n", toupper(teste));

    return 0;
}