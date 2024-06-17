#include <stdio.h>

/*
queue

FIFO - First In First Out

enqueue - inserir um elemento na fila
dequeue - remover um elemento da fila
clear - limpar a fila

Estrutura:
fila[10] - [0][1][2][3][4][5][6][7][8][9]
head - cabeca da fila
tail - cauda da fila
*/

#define TAMFILA 10

int fila[TAMFILA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int head = 0;
int tail = 0;

void lista_elementos()
{
    printf("Fila: ");
    for (int i = 0; i < TAMFILA; i++)
    {
        printf("%d ", fila[i]);
    }
    printf("\nHead: %d\n", head);
    printf("Tail: %d\n", tail);
    printf("\n");
}

void enqueue()
{
    int valor;
    if(tail < TAMFILA)
    {
        printf("Informe o valor: ");
        scanf("%d", &valor);
        fila[tail] = valor;
        tail++;
    }
    else
    {
        printf("Fila cheia\n");
    }
}

void dequeue()
{
    if(head < tail)
    {
        fila[head] = 0;
        head++;
    }
    else
    {
        printf("Fila vazia\n");
    }
}

void clear()
{
    for (int i = 0; i < TAMFILA; i++)
    {
        fila[i] = 0;
    }
    head = 0;
    tail = 0;
}

void realoc_queue()
{
    for (int i = 0; i < TAMFILA; i++)
    {
        if(fila[i] == 0)
        {
            for (int j = i; j < TAMFILA; j++)
            {
                if(fila[j] != 0)
                {
                    fila[i] = fila[j];
                    fila[j] = 0;
                    break;
                }
            }
        }
    }
}

int main()
{
    int opcao;

    do
    {
        printf("1 - Enqueue\n");
        printf("2 - Dequeue\n");
        printf("3 - Listar\n");
        printf("4 - Clear\n");
        printf("0 - Sair\n");

        printf("Informe a opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                realoc_queue();
                break;
            case 3:
                lista_elementos();
                break;
            case 4:
                clear();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }
    } 
    while (opcao != 0);

    return 0;
}