#include <stdio.h>
#include <string.h>

// strcpy - copia uma string para outra
// strcat - concatena duas strings
// strcmp - compara duas strings
// strchr - procura um caractere em uma string
// strtok - divide uma string em outras strings com base em um caractere
// strlen - retorna o tamanho de uma string

int main()
{
    char str1[20], str2[20];

    strcpy(str1, "Quinta-");
    strcpy(str2, "feira");

    strcat(str1, str2);

    printf("%s\n", str1);

    strcpy(str1, "Laranja");
    strcpy(str2, "laranja");

    if (strcmp(str1, str2))
    {
        printf("As strings sao diferentes\n");
    }
    else
    {
        printf("As strings sao iguais\n");
    }

    char str3[20] = "pedro@gmail.com";
    char car = '@';

    char *ret = strchr(str3, car);

    printf("A string a partir do caractere %c e: %s\n", car, ret);

    printf("Usuario: %s\n", strtok(str3, "@"));

    strcpy(str3, "pedro@gmail.com");

    printf("Tamanho da string: %ld\n", strlen(str3));

    return 0;
}