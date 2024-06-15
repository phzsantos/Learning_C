#include <stdio.h>

// scanf, printf, fflush, fopen, fclose, fscanf, getc, fputs, getchar, fgets, feof, FILE, EOF, NULL

int main() 
{
    int num1, num2, soma;

    printf("Digite o primeiro numero: ");
    fflush(stdout);
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    fflush(stdout);
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("A soma dos numeros e: %d\n", soma);

    return 0;
}