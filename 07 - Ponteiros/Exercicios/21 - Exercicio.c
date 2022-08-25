#include <stdio.h>

void soma_mais_um(int* ponteiro)
{
    for (int i = 0; i < 5; i++)
    {
        (*(ponteiro+i))++;
    }
}

int main()
{
    int valores[5] = {1,2,3,4,5}, *ponteiro;

    ponteiro = &valores[0];

    soma_mais_um(ponteiro);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", valores[i]);
    }

    return 0;
}