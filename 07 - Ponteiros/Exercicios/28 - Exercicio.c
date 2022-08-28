#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int idade;
    char posicao[20];
    int numero_camisa;
} jogador;

static int codigo_titular = 0, codigo_reserva = 0;
static jogador jogadores_titulares[6], jogadores_reservas[4];

void menu();
void insere_jogador(int tipo);
void listar_jogadores();

int main()
{
    menu();

    return 0;
}

void menu()
{
    int opcao;

    printf("\n1 - Inserir jogador titular\n");
    printf("2 - Inserir jogador reserva\n");
    printf("3 - Listar jogadores\n");
    printf("4 - Sair\n");

    printf("Opcao escolhida: ");
    scanf("%d", &opcao);
    getchar();

    switch (opcao)
    {
        case 1:
            if (codigo_titular < 6)
            {
                insere_jogador(1);
            }
            else
            {
                printf("\nLimite de titulares atingido.\n");
            }
            menu();
            break;
        case 2:
            if (codigo_reserva < 4)
            {
                insere_jogador(0);
            }
            else
            {
                printf("\nLimite de reservas atingido.\n");
            }
            menu();
            break;
        case 3:
            if (codigo_titular != 0 || codigo_reserva != 0)
            {
                listar_jogadores();
            }
            else
            {
                printf("\nNao existem jogadores cadastrados.\n");
            }
            menu();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nEssa opcao nao existe.\n");
            menu();
            break;
    }
}

void insere_jogador(int tipo)
{
    if (tipo)
    {
        printf("\nNome: ");
        fgets(jogadores_titulares[codigo_titular].nome, 50, stdin);
        printf("Idade: ");
        scanf("%d", &jogadores_titulares[codigo_titular].idade);
        getchar();
        printf("Posicao: ");
        fgets(jogadores_titulares[codigo_titular].posicao, 20, stdin);
        printf("Numero camisa: ");
        scanf("%d", &jogadores_titulares[codigo_titular].numero_camisa);
        getchar();

        codigo_titular++;
    }
    else
    {
        printf("\nNome: ");
        fgets(jogadores_reservas[codigo_reserva].nome, 50, stdin);
        printf("Idade: ");
        scanf("%d", &jogadores_reservas[codigo_reserva].idade);
        getchar();
        printf("Posicao: ");
        fgets(jogadores_reservas[codigo_reserva].posicao, 20, stdin);
        printf("Numero camisa: ");
        scanf("%d", &jogadores_reservas[codigo_reserva].numero_camisa);
        getchar();

        codigo_reserva++;
    }
}

void listar_jogadores()
{
    printf("\nTitulares: \n");
    if (codigo_titular)
    {
        for (int i = 0; i < codigo_titular; i++)
        {
            printf("\nNome: %s\n", strtok(jogadores_titulares[i].nome, "\n"));
            printf("Idade: %d\n", jogadores_titulares[i].idade);
            printf("posicao: %s\n", strtok(jogadores_titulares[i].posicao, "\n"));
            printf("Numero camisa: %d\n", jogadores_titulares[i].numero_camisa);
        }
    }
    else
    {
        printf("===== Nenhum jogador cadastrado. =====\n");
    }

    printf("\n========== // ==========\n");

    printf("\nReservas: \n");
    if (codigo_reserva)
    {
        for (int i = 0; i < codigo_reserva; i++)
        {
            printf("\nNome: %s\n", strtok(jogadores_reservas[i].nome, "\n"));
            printf("Idade: %d\n", jogadores_reservas[i].idade);
            printf("posicao: %s\n", strtok(jogadores_reservas[i].posicao, "\n"));
            printf("Numero camisa: %d\n", jogadores_reservas[i].numero_camisa);
        }
    }
    else
    {
        printf("===== Nenhum jogador cadastrado. =====\n");
    }
}