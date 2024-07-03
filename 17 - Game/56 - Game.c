#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct 
{
    int dificuldade;
    int valor1;
    int valor2;
    int operacao;
    int resultado;
} Calcular;

void jogar();
void mostrarInfo(Calcular calc);
int somar(int resposta, Calcular calc);
int diminuir(int resposta, Calcular calc);
int multiplicar(int resposta, Calcular calc);

int pontos = 0;

int main()
{
    srand(time(NULL));

    jogar();

    return 0;
}

void jogar()
{
    Calcular calc;
    int dificuldade, continuar;

    printf("Informe o nivel de dificuldade desejado [1, 2, 3 ou 4]: ");
    scanf("%d", &dificuldade);

    calc.dificuldade = dificuldade;

    calc.operacao = rand() % 3;

    if (calc.dificuldade == 1)
    {
        calc.valor1 = rand() % 11;
        calc.valor2 = rand() % 11;
    }
    else if (calc.dificuldade == 2)
    {
        calc.valor1 = rand() % 101;
        calc.valor2 = rand() % 101;
    }
    else if (calc.dificuldade == 3)
    {
        calc.valor1 = rand() % 1001;
        calc.valor2 = rand() % 1001;
    }
    else if (calc.dificuldade == 4)
    {
        calc.valor1 = rand() % 10001;
        calc.valor2 = rand() % 10001;
    }
    else
    {
        calc.valor1 = rand() % 100001;
        calc.valor2 = rand() % 100001;
    }

    int resposta;
    printf("Informe o resultado para a seguinte operacao:\n");
    if (calc.operacao == 0)
    {
        printf("%d + %d\n", calc.valor1, calc.valor2);
        scanf("%d", &resposta);

        if (somar(resposta, calc))
        {
            pontos += 1;
            printf("Voce tem %d pontos!\n", pontos);
        }
    }
    else if (calc.operacao == 1)
    {
        printf("%d - %d\n", calc.valor1, calc.valor2);
        scanf("%d", &resposta);

        if (diminuir(resposta, calc))
        {
            pontos += 1;
            printf("Voce tem %d pontos!\n", pontos);
        }
    }
    else if (calc.operacao == 2)
    {
        printf("%d * %d\n", calc.valor1, calc.valor2);
        scanf("%d", &resposta);

        if (multiplicar(resposta, calc))
        {
            pontos += 1;
            printf("Voce tem %d pontos!\n", pontos);
        }
    }
    else
    {
        printf("Operacao desconhecida\n");
    }

    printf("Deseja continuar jogando? [1 - sim, 0 - nao]: ");
    scanf("%d", &continuar);

    if (continuar)
    {
        jogar();
    }
    else
    {
        printf("Voce finalizou com %d pontos!\n", pontos);
        printf("Ate a proxima!\n");
        exit(0);
    }
}

void mostrarInfo(Calcular calc)
{
    char opcao[25];

    if (calc.operacao == 0)
    {
        sprintf(opcao, "Somar");
    }
    else if (calc.operacao == 1)
    {
        sprintf(opcao, "Diminuir");
    }
    else if (calc.operacao == 2)
    {
        sprintf(opcao, "Multiplicar");
    }
    else
    {
        sprintf(opcao, "Operacao desconhecida");
    }

    printf("Valor 1: %d\n", calc.valor1);
    printf("Valor 2: %d\n", calc.valor2);
    printf("Dificuldade: %d\n", calc.dificuldade);
    printf("Operacao: %s\n", opcao);
}

int somar(int resposta, Calcular calc)
{
    int resultado = calc.valor1 + calc.valor2;

    calc.resultado = resultado;

    int certo = 0;

    if (resposta == calc.resultado)
    {
        printf("Resposta correta!\n");
        certo = 1;
    }
    else
    {
        printf("Resposta errada!\n");
    }

    printf("%d + %d = %d\n", calc.valor1, calc.valor2, calc.resultado);

    return certo;
}

int diminuir(int resposta, Calcular calc)
{
    int resultado = calc.valor1 - calc.valor2;

    calc.resultado = resultado;

    int certo = 0;

    if (resposta == calc.resultado)
    {
        printf("Resposta correta!\n");
        certo = 1;
    }
    else
    {
        printf("Resposta errada!\n");
    }

    printf("%d - %d = %d\n", calc.valor1, calc.valor2, calc.resultado);
    
    return certo;
}

int multiplicar(int resposta, Calcular calc)
{
    int resultado = calc.valor1 * calc.valor2;

    calc.resultado = resultado;

    int certo = 0;

    if (resposta == calc.resultado)
    {
        printf("Resposta correta!\n");
        certo = 1;
    }
    else
    {
        printf("Resposta errada!\n");
    }

    printf("%d * %d = %d\n", calc.valor1, calc.valor2, calc.resultado);
    
    return certo;
}
