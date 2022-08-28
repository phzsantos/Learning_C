#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto2d
{
    int x, y, z;
};

int main()
{
    int opcao, resultado;
    struct ponto2d ponto_inicial, ponto_final;

    while(1)
    {
        printf("[1] - Digitar o valor do primeiro ponto\n");
        printf("[2] - Digitar o valor do segundo ponto\n");
        printf("[3] - Mostrar a distancia entre os pontos\n");
        printf("[4] - Sair\n");
        
        printf("Opcao escolhida: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("X: ");
                scanf("%d", &ponto_inicial.x);
                printf("Y: ");
                scanf("%d", &ponto_inicial.y);
                printf("Z: ");
                scanf("%d", &ponto_inicial.z);
                break;
            case 2:
                printf("X: ");
                scanf("%d", &ponto_final.x);
                printf("Y: ");
                scanf("%d", &ponto_final.y);
                printf("Z: ");
                scanf("%d", &ponto_final.z);
                break;
            case 3:
                resultado = sqrt(pow((ponto_inicial.x - ponto_final.x), 2) + pow((ponto_inicial.y - ponto_final.y), 2) + pow((ponto_inicial.z - ponto_final.z), 2));
                printf("Distancia: %d\n", resultado);
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Essa opcao nao existe.\n");
                break;
        }
    }

    return 0;
}