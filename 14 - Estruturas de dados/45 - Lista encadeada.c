#include <stdio.h>
#include <stdlib.h>

// linked list
// [1][] -> [4][] -> [7][] -> NULL
// pra que serve uma lista encadeada?
// - inserir e remover elementos de forma eficiente
// - não precisa de um tamanho fixo
// - não precisa de realocação de memória
// - não precisa de cópia de elementos
// - não precisa de deslocamento de elementos

struct st_no
{
    int valor;
    struct st_no *prox;
};

typedef struct st_no no;

int vazia(no *lista_encadeada)
{
    if (lista_encadeada->prox == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void inicia(no *lista_encadeada)
{
    lista_encadeada->prox = NULL;
}

void libera(no *lista_encadeada)
{
    if (!vazia(lista_encadeada))
    {
        no *proxNo, *atual;

        atual = lista_encadeada->prox;
        while (atual != NULL)
        {
            proxNo = atual->prox;
            free(atual);
            atual = proxNo;
        }
    }
}

void exibe(no *lista_encadeada)
{
    if (vazia(lista_encadeada))
    {
        printf("Lista vazia!\n\n");
        return;
    }

    no *tmp;
    tmp = lista_encadeada->prox;

    while (tmp != NULL)
    {
        printf("%d ", tmp->valor);
        tmp = tmp->prox;
    }
    printf("\n\n");
}

void insereInicio(no *lista_encadeada)
{
    no *novoNo;
    novoNo = (no *)malloc(sizeof(no));

    if (!novoNo)
    {
        printf("Sem memória disponível!\n");
        return;
    }

    printf("Informe o valor: ");
    scanf("%d", &novoNo->valor);

    no *oldHead = lista_encadeada->prox;

    lista_encadeada->prox = novoNo;
    novoNo->prox = oldHead;
}

void insereFim(no *lista_encadeada)
{
    no *novoNo;
    novoNo = (no *)malloc(sizeof(no));

    if (!novoNo)
    {
        printf("Sem memória disponível!\n");
        return;
    }

    printf("Informe o valor: ");
    scanf("%d", &novoNo->valor);
    novoNo->prox = NULL;

    if (vazia(lista_encadeada))
    {
        lista_encadeada->prox = novoNo;
    }
    else
    {
        no *tmp;
        tmp = lista_encadeada->prox;

        while (tmp->prox != NULL)
        {
            tmp = tmp->prox;
        }

        tmp->prox = novoNo;
    }
}

void opcao(no *lista_encadeada, int op)
{
    switch (op)
    {
        case 0:
            libera(lista_encadeada);
            break;
        case 1:
            exibe(lista_encadeada);
            break;
        case 2:
            insereInicio(lista_encadeada);
            break;
        case 3:
            insereFim(lista_encadeada);
            break;
        case 4:
            inicia(lista_encadeada);
            break;
        default:
            printf("Comando inválido\n\n");
    }
}

int menu()
{
    int opt;

    printf("Escolha a opção\n");
    printf("0. Sair\n");
    printf("1. Exibir lista\n");
    printf("2. Adicionar nó no início\n");
    printf("3. Adicionar nó no fim\n");
    printf("4. Zerar lista\n");
    printf("Opção: ");
    scanf("%d", &opt);

    return opt;
}

int main()
{
    no *lista_encadeada = (no *)malloc(sizeof(no));

    if(!lista_encadeada)
    {
        printf("Sem memória disponível!\n");
        return 0;
    }

    inicia(lista_encadeada);

    int opt;
    do
    {
        opt = menu();
        opcao(lista_encadeada, opt);
    } 
    while (opt);

    free(lista_encadeada);

    return 0;
}
