#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

typedef struct
{
    int codigo;
    char nome[50];
    char email[50];
    char cpf[20];
    char dataNascimento[20];
    char dataCadastro[20];
} Cliente;

typedef struct
{
    int numero;
    Cliente cliente;
    float saldo;
    float limite;
    float saldoTotal;
} Conta;

void menu();
void infoCliente(Cliente cliente);
void infoConta(Conta conta);
void criarConta();
void efetuarSaque();
void efetuarDeposito();
void efetuarTransferencia();
void listarContas();
float atualizaSaldoTotal(Conta conta);
Conta buscarContaPorNumero(int numero);
void sacar(Conta conta, float valor);
void depositar(Conta conta, float valor);
void transferir(Conta conta_origem, Conta conta_destino, float valor);

static Conta contas[50];
static int contador_contas = 0;
static int contador_clientes = 0;

int main()
{
    menu();

    return 0;
}

void menu()
{
    int opcao;

    printf("==================================\n");
    printf("======= Bem vindo ao Banco =======\n");
    printf("==================================\n");
    printf("1 - Criar conta\n");
    printf("2 - Efetuar saque\n");
    printf("3 - Efetuar depósito\n");
    printf("4 - Efetuar transferência\n");
    printf("5 - Listar contas\n");
    printf("6 - Sair\n");
    scanf("%d", &opcao);
    getchar();

    switch (opcao)
    {
        case 1:
            criarConta();
            break;
        case 2:
            efetuarSaque();
            break;
        case 3:
            efetuarDeposito();
            break;
        case 4:
            efetuarTransferencia();
            break;
        case 5:
            listarContas();
            break;
        case 6:
            printf("Ate a proxima!\n");
            exit(0);
            break;
        default:
            printf("Opção inválida!\n");
            sleep(2);
            menu();
            break;
    }

}

void infoCliente(Cliente cliente)
{
    printf("Nome: %s\n", strtok(cliente.nome, "\n"));
    printf("Data de nascimento: %s\n", strtok(cliente.dataNascimento, "\n"));
    printf("Cadastro em: %s\n", strtok(cliente.dataCadastro, "\n"));
}

void infoConta(Conta conta)
{
    printf("Numero: %d\n", conta.numero);
    printf("Cliente: %s\n", strtok(conta.cliente.nome, "\n"));
    printf("Data de nascimento: %s\n", strtok(conta.cliente.dataNascimento, "\n"));
    printf("Data de cadastro: %s\n", strtok(conta.cliente.dataCadastro, "\n"));
    printf("Saldo: %.2f\n", conta.saldo);
    printf("Limite: %.2f\n", conta.limite);
    printf("Saldo total: %.2f\n", conta.saldoTotal);
}

void criarConta()
{
    Cliente cliente;

    char dia[3];
    char mes[3];
    char ano[5];
    char data_cadastro[20];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    if (tm.tm_mday < 10)
    {
        sprintf(dia, "0%d", tm.tm_mday);
    }
    else
    {
        sprintf(dia, "%d", tm.tm_mday);
    }

    if ((tm.tm_mon + 1) < 10)
    {
        sprintf(mes, "0%d", tm.tm_mon + 1);
    }
    else
    {
        sprintf(mes, "%d", tm.tm_mon + 1);
    }

    sprintf(ano, "%d", tm.tm_year + 1900);

    sprintf(data_cadastro, "%s/%s/%s", dia, mes, ano);

    strcpy(cliente.dataCadastro, data_cadastro);

    cliente.codigo = contador_clientes + 1;
    
    printf("Nome: ");
    fgets(cliente.nome, 50, stdin);
    
    printf("Email: ");
    fgets(cliente.email, 50, stdin);
    
    printf("CPF: ");
    fgets(cliente.cpf, 20, stdin);

    printf("Data de nascimento: ");
    fgets(cliente.dataNascimento, 20, stdin);

    contador_clientes++;

    contas[contador_contas].numero = contador_contas + 1;
    contas[contador_contas].cliente = cliente;
    contas[contador_contas].saldo = 0;
    contas[contador_contas].limite = 0;
    contas[contador_contas].saldoTotal = atualizaSaldoTotal(contas[contador_contas]);

    printf("Conta criada com sucesso!\n");
    printf("Dados da conta:\n");
    infoConta(contas[contador_contas]);

    contador_contas++;

    sleep(4);
    menu();
}

float atualizaSaldoTotal(Conta conta)
{
    return conta.saldo + conta.limite;
}

Conta buscarContaPorNumero(int numero)
{
    Conta conta_encontrada;

    if (contador_contas > 0)
    {
        for (int i = 0; i < contador_contas; i++)
        {
            if (contas[i].numero == numero)
            {
                conta_encontrada = contas[i];
                break;
            }
        }
    }

    return conta_encontrada;
}

void sacar(Conta conta, float valor)
{
    if (valor > 0 && valor <= conta.saldoTotal)
    {
        for (int i = 0; i < contador_contas; i++)
        {
            if (contas[i].numero == conta.numero)
            {
                if (contas[i].saldo >= valor)
                {
                    contas[i].saldo -= valor;
                    contas[i].saldoTotal = atualizaSaldoTotal(contas[i]);
                    printf("Saque efetuado com sucesso!\n");
                    break;
                }
                else
                {
                    float restante = valor - contas[i].saldo;
                    contas[i].limite += restante;
                    contas[i].saldo = 0;
                    contas[i].saldoTotal = atualizaSaldoTotal(contas[i]);
                    printf("Saque efetuado com sucesso!\n");
                }
            }
        }
    }
    else
    {
        printf("Saldo insuficiente!\n");
    }
}

void depositar(Conta conta, float valor)
{
    if (valor > 0)
    {
        for (int i = 0; i < contador_contas; i++)
        {
            if (contas[i].numero == conta.numero)
            {
                contas[i].saldo += valor;
                contas[i].saldoTotal = atualizaSaldoTotal(contas[i]);
                printf("Depósito efetuado com sucesso!\n");
                break;
            }
        }
    }
    else
    {
        printf("Valor inválido!\n");
    }
}

void transferir(Conta conta_origem, Conta conta_destino, float valor)
{
    if (valor > 0 && conta_origem.saldoTotal >= valor)
    {
        for (int co = 0; co < contador_contas; co++)
        {
            if (contas[co].numero == conta_origem.numero)
            {
                for (int cd = 0; cd < contador_contas; cd++)
                {
                    if (contas[cd].numero == conta_destino.numero)
                    {
                        if (contas[co].saldo >= valor)
                        {
                            contas[co].saldo -= valor;
                            contas[cd].saldo += valor;
                            contas[co].saldoTotal = atualizaSaldoTotal(contas[co]);
                            contas[cd].saldoTotal = atualizaSaldoTotal(contas[cd]);
                            printf("Transferência efetuada com sucesso!\n");
                        }
                        else
                        {
                            float restante = valor - contas[co].saldo;
                            contas[co].limite += restante;
                            contas[co].saldo = 0;
                            contas[cd].saldo += valor;
                            contas[co].saldoTotal = atualizaSaldoTotal(contas[co]);
                            contas[cd].saldoTotal = atualizaSaldoTotal(contas[cd]);
                            printf("Transferência efetuada com sucesso!\n");
                        }
                    }
                }
            }
        }
    }
    else
    {
        printf("Saldo insuficiente!\n");
    }
}

void listarContas()
{
    if (contador_contas > 0)
    {
        for (int i = 0; i < contador_contas; i++)
        {
            infoConta(contas[i]);
            printf("\n");
            sleep(1);
        }
    }
    else
    {
        printf("Nenhuma conta cadastrada!\n");
    }

    sleep(2);
    menu();
}

void efetuarSaque()
{
    if (contador_contas > 0)
    {
        int numero;
        printf("Informe o número da conta: ");
        scanf("%d", &numero);
        getchar();

        Conta conta = buscarContaPorNumero(numero);

        if (conta.numero == numero)
        {
            float valor;

            printf("Informe o valor do saque: ");
            scanf("%f", &valor);

            sacar(conta, valor);
        }
        else
        {
            printf("Conta não encontrada!\n");
        }
    }
    else
    {
        printf("Nenhuma conta cadastrada!\n");
    }

    sleep(2);
    menu();
}

void efetuarDeposito()
{
    if (contador_contas > 0)
    {
        int numero;
        printf("Informe o número da conta: ");
        scanf("%d", &numero);
        getchar();

        Conta conta = buscarContaPorNumero(numero);

        if (conta.numero == numero)
        {
            float valor;

            printf("Informe o valor do deposito: ");
            scanf("%f", &valor);

            depositar(conta, valor);
        }
        else
        {
            printf("Conta não encontrada!\n");
        }
    }
    else
    {
        printf("Nenhuma conta cadastrada!\n");
    }

    sleep(2);
    menu();
}

void efetuarTransferencia()
{
    if (contador_contas > 0)
    {
        int numero, numero_destino;

        printf("Informe o número da conta de origem: ");
        scanf("%d", &numero);

        Conta conta_origem = buscarContaPorNumero(numero);

        if (conta_origem.numero == numero)
        {
            printf("Informe o número da conta de destino: ");
            scanf("%d", &numero_destino);

            Conta conta_destino = buscarContaPorNumero(numero_destino);

            if (conta_destino.numero == numero_destino)
            {
                float valor;

                printf("Informe o valor da transferência: ");
                scanf("%f", &valor);

                transferir(conta_origem, conta_destino, valor);
            }
            else
            {
                printf("Conta de destino não encontrada!\n");
            }
        }
        else
        {
            printf("Conta de origem não encontrada!\n");
        }
    }
    else
    {
        printf("Nenhuma conta cadastrada!\n");
    }

    sleep(2);
    menu();
}
