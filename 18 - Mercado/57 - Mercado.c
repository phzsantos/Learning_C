#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct
{
    int codigo;
    char nome[30];
    float preco;
} Produto;

typedef struct
{
    Produto produto;
    int quantidade;
} Carrinho;

void infoProduto(Produto prod);
void menu();
void cadastrarProduto();
void listarProdutos();
void comprarProduto();
void visualizarCarrinho();
Produto pegarProdutoPorCodigo(int codigo);
int * temNoCarrinho(int codigo);
void fecharPedido();

static int contador_produto = 0;
static int contador_carrinho = 0;
static Carrinho carrinho[50];
static Produto produtos[50];

int main()
{
    menu();

    return 0;
}

void infoProduto(Produto prod)
{
    printf("Codigo: %d\n", prod.codigo);
    printf("Nome: %s\n", strtok(prod.nome, "\n"));
    printf("Preco: %.2f\n", prod.preco);
}

void menu()
{
    int opcao;

    printf("==================================\n");
    printf("====== Bem vindo ao Mercado ======\n");
    printf("==================================\n");
    printf("1 - Cadastrar Produto\n");
    printf("2 - Listar Produtos\n");
    printf("3 - Comprar Produto\n");
    printf("4 - Visualizar carrinho\n");
    printf("5 - Fechar Pedido\n");
    printf("6 - Sair\n");
    scanf("%d", &opcao);
    getchar();

    switch (opcao)
    {
        case 1:
            cadastrarProduto();
            break;
        case 2:
            listarProdutos();
            break;
        case 3:
            comprarProduto();
            break;
        case 4:
            visualizarCarrinho();
            break;
        case 5:
            fecharPedido();
            break;
        case 6:
            printf("Volte sempre!\n");
            sleep(2);
            exit(0);
            break;
        default:
            printf("Opcao invalida\n");
            sleep(2);
            menu();
            break;
    }
}

void cadastrarProduto()
{
    printf("Cadastro de Produto\n");
    printf("===================\n");

    printf("Informe o nome do produto: \n");
    fgets(produtos[contador_produto].nome, 30, stdin);

    printf("Informe o preco do produto: \n");
    scanf("%f", &produtos[contador_produto].preco);

    printf("O produto %s foi cadastrado com sucesso!\n", strtok(produtos[contador_produto].nome, "\n"));

    produtos[contador_produto].codigo = contador_produto + 1;

    contador_produto++;

    sleep(2);
    menu();
}

void listarProdutos()
{
    if (contador_produto > 0)
    {
        printf("Produtos Cadastrados\n");
        printf("=====================\n");

        for (int i = 0; i < contador_produto; i++)
        {
            infoProduto(produtos[i]);
            printf("----------------------\n");
            sleep(1);
        }

        sleep(2);
        menu();
    }
    else
    {
        printf("Nenhum produto cadastrado\n");
        sleep(2);
        menu();
    }
}

void comprarProduto()
{
    if (contador_produto > 0)
    {
        int codigo;

        printf("Produtos Cadastrados\n");
        printf("=====================\n");
        for (int i = 0; i < contador_produto; i++)
        {
            infoProduto(produtos[i]);
            printf("----------------------\n");
            sleep(1);
        }

        printf("Informe o codigo do produto: \n");
        scanf("%d", &codigo);
        getchar();

        int tem_mercado = 0;
        for (int i = 0; i < contador_produto; i++)
        {
            if (produtos[i].codigo == codigo)
            {
                tem_mercado = 1;
                
                if (contador_carrinho > 0)
                {
                    int * tem_carrinho = temNoCarrinho(codigo);
                    if (tem_carrinho[0] == 1)
                    {
                        carrinho[tem_carrinho[1]].quantidade++;
                        printf("Aumentei a quantidade do produto %s\n", strtok(produtos[i].nome, "\n"));
                    }
                    else
                    {
                        Produto produto = pegarProdutoPorCodigo(codigo);
                        carrinho[contador_carrinho].produto = produto;
                        carrinho[contador_carrinho].quantidade = 1;
                        contador_carrinho++;
                        printf("Produto %s adicionado ao carrinho\n", strtok(produto.nome, "\n"));
                    }
                }
                else
                {
                    Produto produto = pegarProdutoPorCodigo(codigo);
                    carrinho[contador_carrinho].produto = produto;
                    carrinho[contador_carrinho].quantidade = 1;
                    contador_carrinho++;
                    printf("Produto %s adicionado ao carrinho\n", strtok(produto.nome, "\n"));
                }

                sleep(2);
                menu();
            }
        }

        if (tem_mercado == 0)
        {
            printf("Produto nao encontrado com codigo %d\n", codigo);
            sleep(2);
            menu();
        }
    }
    else
    {
        printf("Nenhum produto cadastrado\n");
        sleep(2);
        menu();
    }
}

void visualizarCarrinho()
{
    if (contador_carrinho > 0)
    {
        printf("Produtos no Carrinho\n");
        printf("=====================\n");

        for (int i = 0; i < contador_carrinho; i++)
        {
            infoProduto(carrinho[i].produto);
            printf("Quantidade: %d\n", carrinho[i].quantidade);
            printf("----------------------\n");
            sleep(1);
        }
        sleep(2);
        menu();
    }
    else
    {
        printf("Nenhum produto no carrinho\n");
        sleep(2);
        menu();
    }
}

Produto pegarProdutoPorCodigo(int codigo)
{
    Produto produto_encontrado;
    for (int i = 0; i < contador_produto; i++)
    {
        if (produtos[i].codigo == codigo)
        {
            produto_encontrado = produtos[i];
            break;
        }
    }

    return produto_encontrado;
}

int * temNoCarrinho(int codigo)
{
    int static retorno[] = {0, 0};

    for (int i = 0; i < contador_carrinho; i++)
    {
        if (carrinho[i].produto.codigo == codigo)
        {
            retorno[0] = 1;
            retorno[1] = i;
            break;
        }
    }

    return retorno;
}

void fecharPedido()
{
    if (contador_carrinho > 0)
    {
        float valor_total = 0.0;
        
        printf("Produtos no Carrinho\n");
        printf("=====================\n");

        for (int i = 0; i < contador_carrinho; i++)
        {
            Produto produto = carrinho[i].produto;
            int quantidade = carrinho[i].quantidade;
            valor_total += produto.preco * quantidade;
            
            infoProduto(produto);
            printf("Quantidade: %d\n", quantidade);
            printf("----------------------\n");
            sleep(1);
        }

        printf("Sua fatura e de: %.2f\n", valor_total);

        contador_carrinho = 0;
        printf("Obrigado pela preferencia!\n");
        sleep(5);
        menu();
    }
    else
    {
        printf("Nenhum produto no carrinho\n");
        sleep(3);
        menu();
    }
}
