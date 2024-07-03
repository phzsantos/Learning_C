#include <stdio.h>
#include <stdlib.h>

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

int pontos = 0;

int main()
{
    srand(time(NULL));

    jogar();

    return 0;
}

void jogar()
{

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
