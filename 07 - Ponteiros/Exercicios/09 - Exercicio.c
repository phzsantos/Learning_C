#include <stdio.h>

void imprime_enderecos_matriz(float* matriz)
{
    for (int i = 0; i < 3*3; i++)
    {
        printf("%p ", &matriz[i]);

        if ((i+1) % 3 == 0)
        {
            printf("\n");
        }
    }
}

int main()
{
    float matriz[3][3] = {1,2,3,4,5,6,7,8,9};

    imprime_enderecos_matriz(&matriz[0][0]);

    return 0;
}