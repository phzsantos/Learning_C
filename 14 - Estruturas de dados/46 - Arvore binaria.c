#include <stdio.h>
#include <stdlib.h>

// binary tree
// - ou, nao tem elemento algum
// - ou, tem um elemento distinto chamado raiz, e duas arvores binarias chamadas subarvore esquerda e subarvore direita
// pra que serve uma arvore binaria?
// - busca eficiente de elementos
// - insercao e remocao de elementos de forma eficiente
// - estruturacao hierarquica de dados
// - implementacao de pilhas e filas de prioridade
// - algoritmos de compressao de dados
// - analise e avaliacao de expressoes matematicas e linguagens de programacao

struct st_arvore
{
    int valor;
    struct st_arvore *subarvore_esquerda;
    struct st_arvore *subarvore_direita;
};

typedef struct st_arvore arvore;

arvore *criarArvore()
{
    return NULL;
}

int arvoreVazia(arvore *t)
{
    return t == NULL;
}

void mostraArvore(arvore* t)
{
    printf("<");

    if (!arvoreVazia(t))
    {
        printf("%d", t->valor);
        mostraArvore(t->subarvore_esquerda);
        mostraArvore(t->subarvore_direita);
    }

    printf(">");
}

void insereDadoArvore(arvore** t, int num)
{
    if (*t == NULL)
    {
        *t = (arvore*) malloc(sizeof(arvore));
        (*t)->subarvore_esquerda = NULL;
        (*t)->subarvore_direita = NULL;
        (*t)->valor = num;
    }
    else
    {
        if (num > (*t)->valor)
        {
            insereDadoArvore(&(*t)->subarvore_esquerda, num);
        }
        if (num < (*t)->valor)
        {
            insereDadoArvore(&(*t)->subarvore_direita, num);
        }
    }
}

int estaNaArvore(arvore* t, int num)
{
    if (arvoreVazia(t))
    {
        return 0;
    }

    return t->valor == num || estaNaArvore(t->subarvore_esquerda, num) || estaNaArvore(t->subarvore_direita, num);
}

int main()
{
    arvore *t = criarArvore();

    insereDadoArvore(&t, 12);
    insereDadoArvore(&t, 15);
    insereDadoArvore(&t, 10);
    insereDadoArvore(&t, 13);

    mostraArvore(t);

    if (arvoreVazia(t))
    {
        printf("\nArvore vazia\n");
    }
    else
    {
        printf("\nArvore nao vazia\n");
    }

    if (estaNaArvore(t, 15))
    {
        printf("15 esta na arvore\n");
    }
    else
    {
        printf("15 nao esta na arvore\n");
    }

    if (estaNaArvore(t, 22))
    {
        printf("22 esta na arvore\n");
    }
    else
    {
        printf("22 nao esta na arvore\n");
    }

    free(t);

    return 0;
}
