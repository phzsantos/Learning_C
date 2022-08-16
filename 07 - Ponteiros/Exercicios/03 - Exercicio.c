#include <stdio.h>

int main()
{
    int variavel_1, variavel_2;

    scanf("%d", &variavel_1);
    scanf("%d", &variavel_2);

    if (&variavel_1 > &variavel_2)
    {
        printf("%d\n", variavel_1);
    }
    else
    {
        printf("%d\n", variavel_2);
    }

    return 0;
}