#include <stdio.h>

/*
stack

FILO - First In Last Out
LIFO - Last In First Out

push - inserir um elemento na pilha
pop - remover um elemento da pilha
clear - limpar a pilha

Estrutura:
pilha[10] - [0][1][2][3][4][5][6][7][8][9]
top - topo da pilha
*/

#define TAMPILHA 10

int pilha[TAMPILHA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int top = 0;

void lista_elementos()
{
    printf("Pilha: ");
    for (int i = 0; i < TAMPILHA; i++)
    {
        printf("%d ", pilha[i]);
    }
    printf("\nTop: %d\n", top);
    printf("\n");
}

void push()
{
    int valor;
    if(top < TAMPILHA)
    {
        printf("Informe o valor: ");
        scanf("%d", &valor);
        pilha[top] = valor;
        top++;
    }
    else
    {
        printf("Pilha cheia\n");
    }
}

void pop()
{
    if(top > 0)
    {
        pilha[top - 1] = 0;
        top--;
    }
    else
    {
        printf("Pilha vazia\n");
    }
}

void clear()
{
    for (int i = 0; i < TAMPILHA; i++)
    {
        pilha[i] = 0;
    }
    top = 0;
}

int main()
{
    int opcao;
    do
    {
        printf("Selecione uma opcao:\n");
        printf("1 - Push\n");
        printf("2 - Pop\n");
        printf("3 - Listar\n");
        printf("4 - Clear\n");
        printf("0 - Sair\n");

        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
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